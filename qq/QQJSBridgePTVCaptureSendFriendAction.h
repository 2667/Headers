//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/MulMemSelBusiProcessDelegate-Protocol.h>
#import <QQMainProject/QQRichMediaPickerControllerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, PTVPluginConfigModel, QQMessageModel, QQProgressHUD, QQRichMediaPickerController, QQRichTinyVideoClips, QQViewController, SimpleAlertView, UIImage, UIView;

@interface QQJSBridgePTVCaptureSendFriendAction : NSObject <QQRichMediaPickerControllerDelegate, MulMemSelBusiProcessDelegate>
{
    int _uiSeq;
    int _ssoSeq;
    QQRichMediaPickerController *_videoController;
    NSArray *_selectedUins;
    NSString *_mediaType;
    QQRichTinyVideoClips *_videoClips;
    NSDictionary *_videoClipsInfo;
    UIImage *_capturePhoto;
    QQMessageModel *_sendingMsgModel;
    QQProgressHUD *_progressHUD;
    UIView *_sendingMask;
    SimpleAlertView *_failAlert;
    QQViewController *_sourceViewController;
    PTVPluginConfigModel *_configModel;
    NSString *_tmpId;
}

+ (id)configInfoKey;
@property(retain, nonatomic) NSString *tmpId; // @synthesize tmpId=_tmpId;
@property(retain, nonatomic) PTVPluginConfigModel *configModel; // @synthesize configModel=_configModel;
@property(nonatomic) __weak QQViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(retain, nonatomic) SimpleAlertView *failAlert; // @synthesize failAlert=_failAlert;
@property int ssoSeq; // @synthesize ssoSeq=_ssoSeq;
@property int uiSeq; // @synthesize uiSeq=_uiSeq;
@property(retain, nonatomic) UIView *sendingMask; // @synthesize sendingMask=_sendingMask;
@property(retain, nonatomic) QQProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(retain, nonatomic) QQMessageModel *sendingMsgModel; // @synthesize sendingMsgModel=_sendingMsgModel;
@property(retain, nonatomic) UIImage *capturePhoto; // @synthesize capturePhoto=_capturePhoto;
@property(retain, nonatomic) NSDictionary *videoClipsInfo; // @synthesize videoClipsInfo=_videoClipsInfo;
@property(retain, nonatomic) QQRichTinyVideoClips *videoClips; // @synthesize videoClips=_videoClips;
@property(retain, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSArray *selectedUins; // @synthesize selectedUins=_selectedUins;
@property(nonatomic) __weak QQRichMediaPickerController *videoController; // @synthesize videoController=_videoController;
- (void).cxx_destruct;
- (void)shouldDelayPresentController;
- (void)onAccountLogoutNotification:(id)arg1;
- (void)stopSendImg;
- (void)stopSendPtv;
- (void)processFail:(_Bool)arg1;
- (void)handleRichMediaTransferStateNotification:(id)arg1;
- (void)multiMsgSendResult:(id)arg1;
- (void)multiMsgResend:(id)arg1;
- (void)onSendMsg:(id)arg1;
- (void)simpleAlertViewDismiss:(id)arg1;
- (void)buttonClick:(id)arg1 atIndex:(int)arg2;
- (void)sendPic;
- (void)showSendingMask;
- (void)sendVideo;
- (void)onBusinessProcessCancelMulMemSelector:(id)arg1 currentViewControllerClass:(id)arg2 selectedMember:(id)arg3;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (void)richMediaPickerControllerDidCancel:(id)arg1;
- (void)showMulMemSelController;
- (void)richMediaPickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)navigationController;
- (void)dealloc;
- (id)initWithSourceController:(id)arg1 andVideoController:(id)arg2 andPluginConfig:(id)arg3;
- (id)init;
- (void)saveSendedNum:(long long)arg1;
- (long long)getSendedNum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
