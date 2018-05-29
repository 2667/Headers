//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "CountryCodeViewControllerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WBLoginManagerProtocol-Protocol.h"

@class NSString, UIButton, UILabel, UIScrollView, WBLoginTextField, WBPhoneCountryView;

@interface WBGetAbroadPhoneNumberViewController : WBViewController <WBLoginManagerProtocol, UITextFieldDelegate, CountryCodeViewControllerDelegate>
{
    _Bool isInLoginManager;
    _Bool _isGetPhoneNumberRequestFinish;
    WBLoginTextField *_accountNameTextField;
    UIButton *_confirmButton;
    UILabel *_toastMessageLabel;
    UIScrollView *_backgroundView;
    WBPhoneCountryView *_countryView;
    NSString *_lastAccountName;
}

@property(copy, nonatomic) NSString *lastAccountName; // @synthesize lastAccountName=_lastAccountName;
@property(nonatomic) _Bool isGetPhoneNumberRequestFinish; // @synthesize isGetPhoneNumberRequestFinish=_isGetPhoneNumberRequestFinish;
@property(retain, nonatomic) WBPhoneCountryView *countryView; // @synthesize countryView=_countryView;
@property(retain, nonatomic) UIScrollView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *toastMessageLabel; // @synthesize toastMessageLabel=_toastMessageLabel;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) WBLoginTextField *accountNameTextField; // @synthesize accountNameTextField=_accountNameTextField;
@property(nonatomic) _Bool isInLoginManager; // @synthesize isInLoginManager;
- (void).cxx_destruct;
- (void)toastDisplayWithMessage:(id)arg1 isError:(_Bool)arg2;
- (void)openForgetPasswordWebsite;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardDidShowNotification:(id)arg1;
- (void)keyboardChangedNotification:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldValueDidChanged:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)countryCodeDidSelect:(id)arg1;
- (void)onCountryButtonTapped:(id)arg1;
- (void)onBackGroundButtonTapped;
- (void)confirmButtonPressed;
- (void)dealloc;
- (void)configSubviewsFrame;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)setupSubviews;
- (void)viewDidLoad;
- (void)updatePropertyWithPara:(id)arg1 context:(id)arg2 currentStep:(unsigned long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

