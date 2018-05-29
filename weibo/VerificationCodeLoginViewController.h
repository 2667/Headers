//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "UITextFieldDelegate-Protocol.h"
#import "WBLoginManagerProtocol-Protocol.h"

@class NSString, NSTimer, UIButton, UIImageView, UILabel, UIPanGestureRecognizer, UIScrollView, UIView, WBTextField, WBVerficationDataModel;

@interface VerificationCodeLoginViewController : WBViewController <WBLoginManagerProtocol, UITextFieldDelegate>
{
    UIScrollView *backgroundScrollView;
    UILabel *titleLabel;
    UILabel *toastMessageLabel;
    UIButton *ensureButton;
    UIButton *retryButton;
    NSTimer *countDownTimer;
    int countdown;
    NSString *isregetcode;
    _Bool _hasShowKeyBoard;
    UIPanGestureRecognizer *_panGesture;
    _Bool isInLoginManager;
    _Bool _isCodeResend;
    UILabel *_tipDescribeLabel;
    UIImageView *_textFieldImageView;
    WBTextField *_securityCodeTextField;
    UIView *_textFieldBottomSeparateLine;
    WBVerficationDataModel *_dataModel;
}

@property(retain, nonatomic) WBVerficationDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) UIView *textFieldBottomSeparateLine; // @synthesize textFieldBottomSeparateLine=_textFieldBottomSeparateLine;
@property(retain, nonatomic) WBTextField *securityCodeTextField; // @synthesize securityCodeTextField=_securityCodeTextField;
@property(retain, nonatomic) UIImageView *textFieldImageView; // @synthesize textFieldImageView=_textFieldImageView;
@property(retain, nonatomic) UILabel *tipDescribeLabel; // @synthesize tipDescribeLabel=_tipDescribeLabel;
@property(nonatomic) _Bool isCodeResend; // @synthesize isCodeResend=_isCodeResend;
@property(nonatomic) _Bool isInLoginManager; // @synthesize isInLoginManager;
- (void).cxx_destruct;
- (id)sectionPhoneNumber:(id)arg1;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)toastDisplayWithMessage:(id)arg1 isError:(_Bool)arg2;
- (_Bool)handleError:(id)arg1;
- (id)sourceString;
- (_Bool)isVerificationCodeFormatRight:(id)arg1;
- (void)tapRequest;
- (void)confirmBindThird;
- (void)confirmResetPassword;
- (void)confirmCodeLogin;
- (void)confirmRegister;
- (void)confirmSecurityLogin;
- (void)confirmNameLogin;
- (void)ensureButtonClick;
- (void)sendBindThirdCode;
- (void)sendResetPasswordMsg;
- (void)sendLoginCode;
- (void)sendRegisterCode;
- (void)sendSecurityLoginCode;
- (void)sendNameLoginCode;
- (void)openUseProtocolH5;
- (void)retryButtonClick;
- (void)textFieldValueDidChanged:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)changeTime;
- (void)invalidateTimer;
- (void)retryStartTimer;
- (id)describeLabelText;
- (id)ensureButtonTitle;
- (void)configSubviewsFrame;
- (void)setupSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dismissSelf;
- (void)viewDidLoad;
- (void)dealloc;
- (void)updatePropertyWithPara:(id)arg1 context:(id)arg2 currentStep:(unsigned long long)arg3;
- (id)moduleID;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

