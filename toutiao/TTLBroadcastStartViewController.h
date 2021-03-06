//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HTSCameraDelegate-Protocol.h"
#import "TTLBroadCastBeautifyLevelViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class HTSCamera, NSDictionary, NSNumber, NSString, TTLBroadCastBeautifyLevelView, TTLCreateRoomService, TTLRoomUserInfoService, UIActivityIndicatorView, UIButton, UIImageView, UITextField, UIView;

@interface TTLBroadcastStartViewController : UIViewController <UITextFieldDelegate, TTLBroadCastBeautifyLevelViewDelegate, UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, HTSCameraDelegate, UIAlertViewDelegate>
{
    _Bool _isUploadingImage;
    _Bool _tabbarHidden;
    _Bool _statusBarHidden;
    NSDictionary *_extraInfo;
    HTSCamera *_camera;
    NSString *_liveTitle;
    TTLBroadCastBeautifyLevelView *_beautifyLevelView;
    NSString *_webURI;
    NSString *_userName;
    NSNumber *_thumbWidth;
    NSNumber *_thumbHeight;
    long long _beautifyLevel;
    UITextField *_textField;
    UIButton *_uploadButton;
    UIButton *_startButton;
    UIButton *_closeButton;
    UIButton *_reverseButton;
    UIButton *_beautifyButton;
    UIImageView *_bgImageView;
    UIImageView *_photoImageView;
    UIView *_cameraContainer;
    UIView *_bottomLine;
    UIActivityIndicatorView *_indicator;
    TTLCreateRoomService *_createRoomService;
    TTLRoomUserInfoService *_userInfoService;
}

@property(retain, nonatomic) TTLRoomUserInfoService *userInfoService; // @synthesize userInfoService=_userInfoService;
@property(retain, nonatomic) TTLCreateRoomService *createRoomService; // @synthesize createRoomService=_createRoomService;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) _Bool tabbarHidden; // @synthesize tabbarHidden=_tabbarHidden;
@property(nonatomic) _Bool isUploadingImage; // @synthesize isUploadingImage=_isUploadingImage;
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *cameraContainer; // @synthesize cameraContainer=_cameraContainer;
@property(retain, nonatomic) UIImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIButton *beautifyButton; // @synthesize beautifyButton=_beautifyButton;
@property(retain, nonatomic) UIButton *reverseButton; // @synthesize reverseButton=_reverseButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *startButton; // @synthesize startButton=_startButton;
@property(retain, nonatomic) UIButton *uploadButton; // @synthesize uploadButton=_uploadButton;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) long long beautifyLevel; // @synthesize beautifyLevel=_beautifyLevel;
@property(retain, nonatomic) NSNumber *thumbHeight; // @synthesize thumbHeight=_thumbHeight;
@property(retain, nonatomic) NSNumber *thumbWidth; // @synthesize thumbWidth=_thumbWidth;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *webURI; // @synthesize webURI=_webURI;
@property(retain, nonatomic) TTLBroadCastBeautifyLevelView *beautifyLevelView; // @synthesize beautifyLevelView=_beautifyLevelView;
@property(retain, nonatomic) NSString *liveTitle; // @synthesize liveTitle=_liveTitle;
@property(retain, nonatomic) HTSCamera *camera; // @synthesize camera=_camera;
@property(copy, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
- (void).cxx_destruct;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)beautifyLevelViewDidClickButtonAtIndex:(long long)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)processImage:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (_Bool)isMicroPhoneDenied;
- (_Bool)isCameraDenied;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)beautifyButtonDidClick:(id)arg1;
- (void)reverseButtonDidClick:(id)arg1;
- (void)closeButtonDidClick:(id)arg1;
- (void)protocolButtonDidClick:(id)arg1;
- (void)startBroadcast;
- (void)startButtonDidClick:(id)arg1;
- (void)uploadButtonDidClick:(id)arg1;
- (void)updateConstraints;
- (void)createCamera;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

