//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "UITextFieldDelegate-Protocol.h"
#import "WBLoginManagerProtocol-Protocol.h"

@class NSString, UIButton, UILabel, UIScrollView, WBAccount, WBLoginTextField;

@interface WBSetPasswordViewController : WBViewController <UITextFieldDelegate, WBLoginManagerProtocol>
{
    _Bool isInLoginManager;
    _Bool _isLoginCase;
    _Bool _shouldShowCancelButton;
    CDUnknownBlockType _finishBlock;
    UIScrollView *_contentView;
    UILabel *_descriptionLabel;
    WBLoginTextField *_passwordTextField;
    UILabel *_toastMessageLabel;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
    UILabel *_psLabel;
    WBAccount *_account;
    NSString *_phoneNumber;
    NSString *_encryptedPhoneNumber;
}

@property(retain, nonatomic) NSString *encryptedPhoneNumber; // @synthesize encryptedPhoneNumber=_encryptedPhoneNumber;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) WBAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) UILabel *psLabel; // @synthesize psLabel=_psLabel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *toastMessageLabel; // @synthesize toastMessageLabel=_toastMessageLabel;
@property(retain, nonatomic) WBLoginTextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(nonatomic) _Bool shouldShowCancelButton; // @synthesize shouldShowCancelButton=_shouldShowCancelButton;
@property(nonatomic) _Bool isLoginCase; // @synthesize isLoginCase=_isLoginCase;
@property(nonatomic) _Bool isInLoginManager; // @synthesize isInLoginManager;
- (void).cxx_destruct;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardDidShowNotification:(id)arg1;
- (void)keyboardChangedNotification:(id)arg1;
- (void)toastDisplayWithMessage:(id)arg1 isError:(_Bool)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldValueDidChanged:(id)arg1;
- (void)contentViewTapped;
- (void)confirmButtonPressed;
- (void)backItemPressed;
- (void)dismissWithFinish:(_Bool)arg1;
- (void)cancelButtonPressed;
- (void)configSubviewsFrame;
- (void)setupSubviews;
- (void)viewDidLoad;
- (void)updatePropertyWithPara:(id)arg1 context:(id)arg2 currentStep:(unsigned long long)arg3;
- (id)moduleID;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

