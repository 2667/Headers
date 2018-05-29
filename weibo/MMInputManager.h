//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MMComposerAddonsViewDelegate-Protocol.h"
#import "MMInteractiveMenuDelegate-Protocol.h"
#import "WBALAssetPickerContextManagerDelegate-Protocol.h"
#import "WBAudioRecorderOverlayControllerDelegate-Protocol.h"
#import "WBImageEditViewControllerDelegate-Protocol.h"
#import "WBMapLocationViewControllerDelegate-Protocol.h"
#import "WBMessagesInputViewDelegate-Protocol.h"
#import "WBNewEmoticonInputViewDelegate-Protocol.h"
#import "WBRecordButtonDelegate-Protocol.h"

@class ALAssetsLibrary, MMBaseMessageViewController, MMComposerAddonsView, MMInteractiveMenu, NSString, UIView, WBALAssetPickerContextManager, WBAudioRecorderOverlayController, WBMessagesInputView, WBNewEmoticonInputView, WBProgressHUD, WBTipQuickSendImage;

@interface MMInputManager : NSObject <WBAudioRecorderOverlayControllerDelegate, WBImageEditViewControllerDelegate, WBALAssetPickerContextManagerDelegate, WBMapLocationViewControllerDelegate, WBMessagesInputViewDelegate, WBRecordButtonDelegate, WBNewEmoticonInputViewDelegate, MMComposerAddonsViewDelegate, MMInteractiveMenuDelegate>
{
    _Bool _keyboardIsVisible;
    _Bool _hasInteractiveMenu;
    _Bool _needPushAnimation;
    _Bool _shouldHideChangeButton;
    _Bool _dontDisableInteractionForInputView;
    _Bool _peeking;
    _Bool _isRuningAnimate;
    _Bool _isInputHide;
    _Bool _loadGif;
    _Bool _isInValidRecordRect;
    _Bool _isInputGroupAt;
    MMBaseMessageViewController *_messageController;
    WBMessagesInputView *_inputView;
    WBNewEmoticonInputView *_emoticonInputView;
    MMComposerAddonsView *_addonsView;
    MMInteractiveMenu *_interactiveMenu;
    UIView *_addonsContainerView;
    WBTipQuickSendImage *_tipQuickSendImage;
    WBALAssetPickerContextManager *_pickerManager;
    WBAudioRecorderOverlayController *_audioRecorderOverlayController;
    WBProgressHUD *_progressHUD;
}

+ (id)addonsDirectoryPath;
@property(nonatomic) _Bool isInputGroupAt; // @synthesize isInputGroupAt=_isInputGroupAt;
@property(nonatomic) _Bool isInValidRecordRect; // @synthesize isInValidRecordRect=_isInValidRecordRect;
@property(retain, nonatomic) WBProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(retain, nonatomic) WBAudioRecorderOverlayController *audioRecorderOverlayController; // @synthesize audioRecorderOverlayController=_audioRecorderOverlayController;
@property(retain, nonatomic) WBALAssetPickerContextManager *pickerManager; // @synthesize pickerManager=_pickerManager;
@property(nonatomic) _Bool loadGif; // @synthesize loadGif=_loadGif;
@property(nonatomic) _Bool isInputHide; // @synthesize isInputHide=_isInputHide;
@property(nonatomic) _Bool isRuningAnimate; // @synthesize isRuningAnimate=_isRuningAnimate;
@property(nonatomic) _Bool peeking; // @synthesize peeking=_peeking;
@property(nonatomic) _Bool dontDisableInteractionForInputView; // @synthesize dontDisableInteractionForInputView=_dontDisableInteractionForInputView;
@property(nonatomic) _Bool shouldHideChangeButton; // @synthesize shouldHideChangeButton=_shouldHideChangeButton;
@property(nonatomic) _Bool needPushAnimation; // @synthesize needPushAnimation=_needPushAnimation;
@property(nonatomic) _Bool hasInteractiveMenu; // @synthesize hasInteractiveMenu=_hasInteractiveMenu;
@property(retain, nonatomic) WBTipQuickSendImage *tipQuickSendImage; // @synthesize tipQuickSendImage=_tipQuickSendImage;
@property(retain, nonatomic) UIView *addonsContainerView; // @synthesize addonsContainerView=_addonsContainerView;
@property(retain, nonatomic) MMInteractiveMenu *interactiveMenu; // @synthesize interactiveMenu=_interactiveMenu;
@property(retain, nonatomic) MMComposerAddonsView *addonsView; // @synthesize addonsView=_addonsView;
@property(retain, nonatomic) WBNewEmoticonInputView *emoticonInputView; // @synthesize emoticonInputView=_emoticonInputView;
@property(retain, nonatomic) WBMessagesInputView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) __weak MMBaseMessageViewController *messageController; // @synthesize messageController=_messageController;
- (void).cxx_destruct;
- (void)relayoutInputView;
- (_Bool)showInteractiveMenuWhenInit;
- (void)cancelForceTouchIfNeeded;
- (void)updateOverlayWithForceProgress:(float)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateOverlayWithForceProgress:(float)arg1 animated:(_Bool)arg2;
- (void)sendIfPossible;
- (void)cancelSending;
- (void)leavePendingCencelState;
- (void)enterPendingCancelState;
- (void)setPendingCancelState:(_Bool)arg1;
@property(readonly, nonatomic) _Bool recording;
- (void)WBALAssetPickerContextManager:(id)arg1 finishedPickImage:(id)arg2;
- (void)WBALAssetPickerContextManager:(id)arg1 finishedPickImageAttachments:(id)arg2;
- (id)needSendAttachments:(id)arg1;
- (void)mapLocationViewControllerDidCancel:(id)arg1;
- (void)mapLocationViewController:(id)arg1 didLocateWithCoordinate:(struct CLLocationCoordinate2D)arg2;
- (_Bool)compressCacheOriginImage:(id)arg1;
- (void)addonsView:(id)arg1 didSelectAddon:(id)arg2;
- (void)recordButton:(id)arg1 isValidRecordRect:(_Bool)arg2;
- (void)imageEditor:(id)arg1 didCancelEditingwithCaches:(id)arg2;
- (void)imageEditor:(id)arg1 didFinishEditingWithCaches:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickerImages:(id)arg2;
- (void)didFinishPickerImages:(id)arg1 progressView:(id)arg2 photoQuality:(_Bool)arg3;
- (id)saveMessages:(id)arg1;
- (void)emoticonInputView:(id)arg1 didSelectGif:(id)arg2;
- (void)emoticonInputViewDidSelectReturn:(id)arg1;
- (void)emoticonInputView:(id)arg1 didSelectEmoticon:(id)arg2;
- (void)emoticonInputViewDidSelectBackSpace:(id)arg1;
- (void)messagesInputView:(id)arg1 didChangeInputMode:(long long)arg2;
- (void)messagesInputView:(id)arg1 willChangeHeightFrom:(double)arg2 to:(double)arg3;
- (void)messagesInputViewTextDidChange:(id)arg1;
- (_Bool)messagesInputViewShouldInputAt:(id)arg1;
- (_Bool)messagesInputViewDidPressBackButtonOnKeyboard:(id)arg1;
- (void)messagesInputViewDidPressSendButtonOnKeyboard:(id)arg1;
- (void)checkLastImage;
- (void)refreshLastImage;
- (void)showTipQuickSendImageView:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)musicPlayerControllerPlaybackStateDidChange:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)moveDownMenu;
- (void)moveUpMenu;
- (void)moveUpInputViewAnimationStopped;
- (void)moveUpInputView;
- (void)moveUpInputViewWithOutAnimation;
- (void)moveInMenu:(id)arg1;
- (void)moveOutMenu:(id)arg1;
- (void)moveOutMenuWithoutAnimation;
- (void)sendActionLogWithMenuTitle:(id)arg1;
- (void)clickMenuItemDidClick;
- (void)chatMenuItemClick;
- (void)openURL:(id)arg1;
- (void)refreshMessages;
- (void)getDataFailed;
- (void)addDefaultInteractiveMenuIfNeed;
- (void)getDataSuccess:(id)arg1;
- (void)reloadInteractiveMenu;
- (void)addMenuView;
- (void)audioRecorderOverlayControllerEndInterruption:(id)arg1;
- (void)audioRecorderOverlayControllerBeginInterruption:(id)arg1;
- (void)audioRecorderOverlayControllerDidReachMaximumRecordingDuration:(id)arg1;
- (void)audioRecorderOverlayController:(id)arg1 didCancelWithError:(id)arg2;
- (void)audioRecorderOverlayControllerDidCancel:(id)arg1;
- (void)audioRecorderOverlayController:(id)arg1 didFinishWithLastSlice:(id)arg2 total:(int)arg3;
- (void)audioRecorderOverlayController:(id)arg1 didRecordSlice:(id)arg2 total:(int)arg3;
- (void)layoutViewForInputViewMode:(long long)arg1 keyboardHeight:(double)arg2 animationDuration:(double)arg3;
- (void)layoutViewForInputViewMode:(id)arg1;
- (void)prepareTableViewFrameForBottom:(double)arg1;
- (void)adjustTableViewFrameForBottom:(double)arg1;
- (void)stopRecordingOnAudioRecorderOverlayWithoutDelay;
- (void)removeAudioRecorderOverlay;
- (void)saveOrUpdateUserInfoToDateBase;
- (void)zanButtonDidClicked:(id)arg1;
- (void)recordButtonDidCancel:(id)arg1;
- (void)recordButtonDidTouchUpOutside:(id)arg1;
- (void)recordButtonDidTouchUpInside:(id)arg1;
- (void)cancelRecordingOnAudioRecorderOverlay;
- (void)recordButtonDidTouchDown:(id)arg1;
- (void)clearTextButtonPressed:(id)arg1;
- (void)startRecordingOnAudioRecorderOverlay;
- (void)sendButtonPressed:(id)arg1;
- (void)stopRecordingOnAudioRecorderOverlay;
- (void)recordButtonStopTracking;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)clearText;
- (void)avatarViewLongPressed:(id)arg1;
- (void)removeKeyboardNotifications;
- (void)registerKeyboardNotifications;
- (void)saveDraft;
- (void)getInteractiveMenuData;
@property(copy, nonatomic) NSString *text;
@property(readonly, nonatomic) ALAssetsLibrary *assetsLibrary;
- (void)configSubviewsFrame;
- (void)reloadAddonsView;
- (void)stepAddonsView;
- (void)stepInputView;
- (id)initWithMessageController:(id)arg1;
- (void)dealloc;
- (id)localPathOfEasterEggImageForText:(id)arg1;
- (void)saveAddonsStatus:(id)arg1;
- (void)checkShowNewPage:(id)arg1;
- (void)reloadAddonsView:(id)arg1;
- (void)updateItemsStatus:(id)arg1 orgDic:(id)arg2 andTypeKey:(id)arg3;
- (id)updateAddonsDicCache:(id)arg1;
- (void)requestAddonsSuccess:(id)arg1;
- (void)requestAddons;
- (id)readAddonsCacheFile;
- (void)saveAddonsDicCache:(id)arg1;
- (void)checkAddonsDirectory;
- (_Bool)checkHasAddsCache;
- (void)judgeUpdateAddonsCache:(id)arg1;
- (id)createCacheAddons:(id)arg1;
- (id)createlocalDefaultAddons;
- (id)fetchAddons;
- (void)openSchemeWithType:(int)arg1 schemeUrl:(id)arg2;
- (void)addDeposit:(int)arg1;
- (void)shareGroupLuckyBag:(int)arg1;
- (id)paramsForRedEnvelopeAndTransfer:(int)arg1;
- (void)shareGroupCard;
- (void)addLocation;
- (int)messageTypeForAddonsBoard;
- (void)checkLastImage:(id)arg1 perform:(CDUnknownBlockType)arg2;
- (_Bool)inputViewDidSelectBackSpace:(id)arg1;
- (void)showGroupMemberList:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)findAtName:(id)arg1 withInputText:(id)arg2;
- (void)textView:(id)arg1 insertAtString:(id)arg2;
- (void)textView:(id)arg1 insertTextAtCurrentSelectedRange:(id)arg2;
- (_Bool)needShowGroupMemberList:(id)arg1;
- (struct _NSRange)foundGroupAtRange:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (_Bool)matchWeiboNick:(id)arg1;
- (struct _NSRange)foundEmoticonRange:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)sendMessageCallBack:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

