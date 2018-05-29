//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "MPTPasterEditorDelegate-Protocol.h"
#import "MPTPasterSliderDelegate-Protocol.h"
#import "MPTVideoDriverDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class MPTPasterEditor, MPTPasterSlider, MPTWBKongZiMianBanView, MPTWBLvJingView, MPTWBTieZiView, MPTWBUITextFieldPull, MPTWBVideoEffectModel, MPTWBVideoSDKDriver, MPTWBYingYueView, NSArray, NSMutableDictionary, NSString, UIButton, UILabel, UIView, WBProgressHUD, WBVideoEditorCache;
@protocol MPTWBVideoEditViewControllerDelegate;

@interface MPTWBVideoEditViewController : WBViewController <UITextFieldDelegate, MPTVideoDriverDelegate, MPTPasterSliderDelegate, MPTPasterEditorDelegate>
{
    _Bool _needCleanCacheWhenCancel;
    _Bool _isPlay;
    _Bool _isShowZhanTing;
    id <MPTWBVideoEditViewControllerDelegate> _delegate;
    unsigned long long _targetBitrate;
    WBVideoEditorCache *_editorCacheModel;
    UILabel *_labTitle;
    UIButton *_btnLeft;
    UIButton *_btnRight;
    MPTWBKongZiMianBanView *_viewKongZiMianBan;
    MPTWBLvJingView *_viewZT;
    MPTWBUITextFieldPull *_viewZM;
    MPTWBYingYueView *_viewYinYue;
    UIButton *_btnYuanYin;
    MPTWBTieZiView *_pasterView;
    MPTPasterSlider *_viewSlider;
    MPTPasterEditor *_viewPasterEditor;
    UIButton *_btnPlay;
    UIButton *_btnPlayCenter;
    NSString *_lastTextContent;
    MPTWBVideoEffectModel *_modelMV;
    MPTWBVideoSDKDriver *_videoEngine;
    NSArray *_videoPathArr;
    UIView *_playerView;
    id _audioSessionHandler;
    CDUnknownBlockType _exportCompletionBlock;
    WBProgressHUD *_exportHUD;
    NSString *_strYinYuePath;
    NSString *_strSongID;
    long long _musicTagPosition;
    long long _musicEditedStartPosition;
    NSString *_keyword;
    double _musicVolume;
    double _originalVolume;
    NSMutableDictionary *_mdictRiZhi;
    MPTWBVideoEffectModel *_modelLJ;
    CDStruct_e83c9415 _timeRange;
}

@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(retain, nonatomic) MPTWBVideoEffectModel *modelLJ; // @synthesize modelLJ=_modelLJ;
@property(retain, nonatomic) NSMutableDictionary *mdictRiZhi; // @synthesize mdictRiZhi=_mdictRiZhi;
@property(nonatomic) double originalVolume; // @synthesize originalVolume=_originalVolume;
@property(nonatomic) double musicVolume; // @synthesize musicVolume=_musicVolume;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) long long musicEditedStartPosition; // @synthesize musicEditedStartPosition=_musicEditedStartPosition;
@property(nonatomic) long long musicTagPosition; // @synthesize musicTagPosition=_musicTagPosition;
@property(retain, nonatomic) NSString *strSongID; // @synthesize strSongID=_strSongID;
@property(retain, nonatomic) NSString *strYinYuePath; // @synthesize strYinYuePath=_strYinYuePath;
@property(nonatomic) _Bool isShowZhanTing; // @synthesize isShowZhanTing=_isShowZhanTing;
@property(nonatomic) __weak WBProgressHUD *exportHUD; // @synthesize exportHUD=_exportHUD;
@property(copy, nonatomic) CDUnknownBlockType exportCompletionBlock; // @synthesize exportCompletionBlock=_exportCompletionBlock;
@property(retain, nonatomic) id audioSessionHandler; // @synthesize audioSessionHandler=_audioSessionHandler;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) NSArray *videoPathArr; // @synthesize videoPathArr=_videoPathArr;
@property(retain, nonatomic) MPTWBVideoSDKDriver *videoEngine; // @synthesize videoEngine=_videoEngine;
@property(nonatomic) _Bool isPlay; // @synthesize isPlay=_isPlay;
@property(retain, nonatomic) MPTWBVideoEffectModel *modelMV; // @synthesize modelMV=_modelMV;
@property(retain, nonatomic) NSString *lastTextContent; // @synthesize lastTextContent=_lastTextContent;
@property(retain, nonatomic) UIButton *btnPlayCenter; // @synthesize btnPlayCenter=_btnPlayCenter;
@property(retain, nonatomic) UIButton *btnPlay; // @synthesize btnPlay=_btnPlay;
@property(retain, nonatomic) MPTPasterEditor *viewPasterEditor; // @synthesize viewPasterEditor=_viewPasterEditor;
@property(retain, nonatomic) MPTPasterSlider *viewSlider; // @synthesize viewSlider=_viewSlider;
@property(retain, nonatomic) MPTWBTieZiView *pasterView; // @synthesize pasterView=_pasterView;
@property(retain, nonatomic) UIButton *btnYuanYin; // @synthesize btnYuanYin=_btnYuanYin;
@property(retain, nonatomic) MPTWBYingYueView *viewYinYue; // @synthesize viewYinYue=_viewYinYue;
@property(retain, nonatomic) MPTWBUITextFieldPull *viewZM; // @synthesize viewZM=_viewZM;
@property(retain, nonatomic) MPTWBLvJingView *viewZT; // @synthesize viewZT=_viewZT;
@property(retain, nonatomic) MPTWBKongZiMianBanView *viewKongZiMianBan; // @synthesize viewKongZiMianBan=_viewKongZiMianBan;
@property(retain, nonatomic) UIButton *btnRight; // @synthesize btnRight=_btnRight;
@property(retain, nonatomic) UIButton *btnLeft; // @synthesize btnLeft=_btnLeft;
@property(retain, nonatomic) UILabel *labTitle; // @synthesize labTitle=_labTitle;
@property(retain, nonatomic) WBVideoEditorCache *editorCacheModel; // @synthesize editorCacheModel=_editorCacheModel;
@property(nonatomic) unsigned long long targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(nonatomic) __weak id <MPTWBVideoEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)exportVideoWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)panToNavigation;
- (void)arrangeSubtitle;
- (void)arrangePaster;
- (void)handelTongJi;
- (void)exportVideo;
- (void)handleMV:(id)arg1;
- (void)shouldPlayPlayer;
- (void)shouldStopPlayer;
- (void)sliderChange:(double)arg1;
- (void)editTopPasterAtTime:(double)arg1;
- (void)beginEditPaster:(id)arg1;
- (void)updatePaster:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (void)updateEditingStatus:(_Bool)arg1;
- (double)currentPlayingTime;
- (void)removePaster:(id)arg1;
- (void)pauseVideo;
- (void)playVideo;
- (void)rebuildPasterLayerIfNeeded;
- (void)driverPlayback:(id)arg1;
- (void)driverDoPause:(id)arg1;
- (void)driverDoPlay:(id)arg1;
- (void)driver:(id)arg1 played:(double)arg2 total:(double)arg3;
- (void)driverLoadVideoFailed:(id)arg1;
- (void)onPlayerView;
- (void)initVideoEngine;
- (void)didReceiveMemoryWarning;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)isBlankString:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)handelKongZiTaiClicked:(unsigned long long)arg1;
- (long long)handelOverlappedTimeMaxCount:(id)arg1;
- (_Bool)stringContainsEmoji:(id)arg1;
- (void)btnPlayClicked:(id)arg1;
- (void)btnRightClicked:(id)arg1;
- (void)initViewPasterEditor;
- (void)initVideoSlider;
- (void)handelPaster:(id)arg1;
- (void)hideHUDs;
- (void)initPasterView;
- (void)guanBiYinYue;
- (void)initYingYue;
- (void)initBtnPlay;
- (void)initViewZT;
- (void)initViewZM;
- (void)initViewKongZiMianBan;
- (void)initSubViews;
- (void)cancelAction:(id)arg1;
- (void)initNav;
- (id)converStrEmoji:(id)arg1;
- (void)textFiledEditChanged:(id)arg1;
- (void)ClickOK:(id)arg1;
- (void)appGoBG;
- (void)appGo;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithVideo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

