//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseViewController.h"

#import "MBKChangPhoneNumberManagerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class MBKChangPhoneNumberManager, NSArray, NSString, UIButton, UIImageView, UILabel;

@interface ReplaceMobileNoViewController : MBKBaseViewController <UIAlertViewDelegate, MBKChangPhoneNumberManagerDelegate>
{
    NSArray *dataArray;
    UILabel *_authLabel;
    UIButton *_authButton;
    UIImageView *_phoneIconImgView;
    UILabel *_currentPhoneLabel;
    UILabel *_descriptionLabel;
    MBKChangPhoneNumberManager *_changPhoneNumberManager;
}

@property(retain, nonatomic) MBKChangPhoneNumberManager *changPhoneNumberManager; // @synthesize changPhoneNumberManager=_changPhoneNumberManager;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *currentPhoneLabel; // @synthesize currentPhoneLabel=_currentPhoneLabel;
@property(retain, nonatomic) UIImageView *phoneIconImgView; // @synthesize phoneIconImgView=_phoneIconImgView;
@property(retain, nonatomic) UIButton *authButton; // @synthesize authButton=_authButton;
@property(retain, nonatomic) UILabel *authLabel; // @synthesize authLabel=_authLabel;
- (void).cxx_destruct;
- (void)registPhoneNumberFailed:(id)arg1 changPhoneNumberManager:(id)arg2;
- (void)registPhoneNumberSucc:(id)arg1 changPhoneNumberManager:(id)arg2;
- (void)startVerify:(id)arg1;
- (id)setServiceNumber:(id)arg1 label:(id)arg2;
- (id)setService:(id)arg1;
- (_Bool)containServiceNumberString:(id)arg1;
- (void)popToRootAction:(id)arg1;
- (void)changeAction:(id)arg1;
- (void)verifyAction:(id)arg1;
- (void)checkNumberRequest:(id)arg1;
- (void)sureButtonAction:(id)arg1;
- (void)countryCodeButtonAction:(id)arg1;
- (void)authenticationAction:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)authButtonAction:(id)arg1;
- (void)replaceBtnAction:(id)arg1;
- (void)authenticationProgress;
- (void)setupView;
- (void)initDescriptionLabel;
- (id)dealWithString:(id)arg1;
- (id)getContinueTitle;
- (void)initCurrentPhonelabel;
- (void)initPhoneIconImgView;
- (void)initWithData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
