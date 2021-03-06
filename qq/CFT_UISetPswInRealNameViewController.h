//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CFT_UIBaseBankSetPswViewController.h>

#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CFT_UISetPswInRealNameViewController : CFT_UIBaseBankSetPswViewController <UIAlertViewDelegate>
{
    _Bool _resetSucceed;
    NSString *_errCode;
    NSString *_errMsg;
    NSMutableDictionary *_params;
}

+ (id)controllerForSetPswWithParams:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(retain, nonatomic) NSString *errCode; // @synthesize errCode=_errCode;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)qwallet_auth_reset_passwd;
- (void)qwallet_name_auth;
- (void)dismissAfterAuthName;
- (void)dismiss;
- (void)backToRootVC;
- (void)nextStep:(id)arg1;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

