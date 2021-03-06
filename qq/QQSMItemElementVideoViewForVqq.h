//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQSMItemElementBaseView.h>

#import <QQMainProject/ActionSheetDataDelegate-Protocol.h>
#import <QQMainProject/QQReadInJoyVideoViewDelegate-Protocol.h>
#import <QQMainProject/QUIAlertPlusViewDelegate-Protocol.h>
#import <QQMainProject/QUIAlertViewDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>
#import <QQMainProject/VideoReportDelegate-Protocol.h>

@class CAGradientLayer, NSString, QQAlertView, QQChatViewTable, QQReadInJoyVideoReport, QQReadInJoyVideoView, QUIAlertPlusView, UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface QQSMItemElementVideoViewForVqq : QQSMItemElementBaseView <UIAlertViewDelegate, QQReadInJoyVideoViewDelegate, ActionSheetDataDelegate, VideoReportDelegate, QUIAlertPlusViewDelegate, QUIAlertViewDelegate>
{
    _Bool _isFullPlay;
    NSString *_uin;
    NSString *_createTime;
    QQChatViewTable *_chatViewTable;
    QQReadInJoyVideoView *_playerView;
    _Bool _videoSourceChanged;
    double _currentPlayTime;
    _Bool _currenVideoPaused;
    _Bool oritationFromButtom;
    _Bool _isPreviewVideo;
    _Bool _isVercitalVideo;
    _Bool _isScrolling;
    _Bool _playVideoByOnWithThree;
    _Bool _lastNetworkState;
    _Bool _willHideTitle;
    UILabel *_timeLabel;
    UIButton *_tipsButton;
    NSString *_source;
    NSString *_srcUrl;
    UIActivityIndicatorView *_indicator;
    UIView *_coverView;
    CAGradientLayer *_colorLayer;
    NSString *_videoId;
    NSString *_fullVideoId;
    NSString *_cKey;
    long long _videoTime;
    double _duration;
    QQReadInJoyVideoReport *_videoReport;
    QQAlertView *_xgAlertView;
    QUIAlertPlusView *_unicomAlertView;
}

@property(retain, nonatomic) QUIAlertPlusView *unicomAlertView; // @synthesize unicomAlertView=_unicomAlertView;
@property(retain, nonatomic) QQAlertView *xgAlertView; // @synthesize xgAlertView=_xgAlertView;
@property(retain, nonatomic) QQReadInJoyVideoReport *videoReport; // @synthesize videoReport=_videoReport;
@property(nonatomic) _Bool willHideTitle; // @synthesize willHideTitle=_willHideTitle;
@property(nonatomic) _Bool lastNetworkState; // @synthesize lastNetworkState=_lastNetworkState;
@property(nonatomic) _Bool playVideoByOnWithThree; // @synthesize playVideoByOnWithThree=_playVideoByOnWithThree;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(nonatomic) _Bool isVercitalVideo; // @synthesize isVercitalVideo=_isVercitalVideo;
@property(nonatomic) _Bool isPreviewVideo; // @synthesize isPreviewVideo=_isPreviewVideo;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long videoTime; // @synthesize videoTime=_videoTime;
@property(retain, nonatomic) NSString *cKey; // @synthesize cKey=_cKey;
@property(retain, nonatomic) NSString *fullVideoId; // @synthesize fullVideoId=_fullVideoId;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) CAGradientLayer *colorLayer; // @synthesize colorLayer=_colorLayer;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(copy, nonatomic) NSString *srcUrl; // @synthesize srcUrl=_srcUrl;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) UIButton *tipsButton; // @synthesize tipsButton=_tipsButton;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) QQReadInJoyVideoView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) _Bool isFullPlay; // @synthesize isFullPlay=_isFullPlay;
@property(nonatomic) __weak QQChatViewTable *chatViewTable; // @synthesize chatViewTable=_chatViewTable;
@property(retain, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (void)report7410;
- (id)getInJoyVidoReport;
- (void)onVideoNeedPause;
- (void)onVideoNeedStop;
- (void)onVideoNeedStart;
- (void)handleMSFNetworkApnStateNotification:(id)arg1;
- (void)resignActive;
- (void)becomeActive;
- (void)onVideoChatStart;
- (void)onVideoChatEnd;
- (id)reuseIdentifier;
- (id)getArticleId;
- (void)ReportPlayedTime;
- (void)InitReportPlayedTime;
- (id)getVideoAccountName;
- (unsigned long long)getVideoFrom;
- (int)getFromReportType;
- (id)getVideoId;
- (int)getPlayStatus;
- (void)rePortMigrateTo1160:(id)arg1 R3:(unsigned long long)arg2 R4:(id)arg3;
- (void)rePort:(id)arg1 R3:(unsigned long long)arg2 R4:(id)arg3;
- (void)alertView:(id)arg1 clickedKeyWord:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)viewInScreen;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)canAutoPlaying;
- (_Bool)isIphone4s;
- (_Bool)isIphone4;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)onPlayerChangeVideoSourceAtTime:(double)arg1 playerStatePaused:(_Bool)arg2;
- (void)onPlayVideoErrorWithErrorCode:(long long)arg1;
- (void)onNatureSizeLoaded:(struct CGSize)arg1;
- (void)onPlayerStateButtonClicked;
- (id)GetFormatedTime:(id)arg1;
- (void)playerView:(id)arg1 parentView:(id)arg2 onEnterFullScreen:(_Bool)arg3;
- (id)screenImage;
- (long long)getPreviewEndPosition;
- (long long)getStartPlayPosition;
- (void)mediaPlayer:(id)arg1 progressUpdated:(double)arg2 duration:(double)arg3;
- (void)mediaPlayer:(id)arg1 didChangeStateTo:(int)arg2;
- (void)onStopPlayVideo:(double)arg1 currentImage:(id)arg2 articleID:(unsigned long long)arg3;
- (void)onStartPlayVideo;
- (_Bool)shouldPlayVideo:(id)arg1;
- (void)resume;
- (void)pause;
- (void)asynStop;
- (void)stop;
- (void)onVideoPlaying;
- (void)onVideoStopped;
- (void)onVideoStarted;
- (void)setAudioSessionMix;
- (void)showTitle;
- (void)hideTitle:(float)arg1;
- (void)autoPlayVideo;
- (void)handleTapPAVideo;
- (_Bool)isPublicAccountVideo;
- (int)playerState;
- (void)setQQSMItemElementBase:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

