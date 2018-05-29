//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALBaseViewController.h"

#import "WBPayMoneyInputViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UIView, WBPayInputView, WBPayMoneyInputView, WBPayTextRollView, WBPayWithdrawModel, WBPayWithdrawParamModel;

@interface WBPayWithdrawViewController : ALBaseViewController <WBPayMoneyInputViewDelegate>
{
    UIView *_contentView;
    WBPayWithdrawModel *_model;
    WBPayTextRollView *_textRollView;
    WBPayMoneyInputView *_moneyInputView;
    WBPayInputView *_canWithdrawView;
    UILabel *_tipsLabel;
    UIButton *_withdrawButton;
    WBPayWithdrawParamModel *_paramModel;
}

@property(retain, nonatomic) WBPayWithdrawParamModel *paramModel; // @synthesize paramModel=_paramModel;
@property(retain, nonatomic) UIButton *withdrawButton; // @synthesize withdrawButton=_withdrawButton;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) WBPayInputView *canWithdrawView; // @synthesize canWithdrawView=_canWithdrawView;
@property(retain, nonatomic) WBPayMoneyInputView *moneyInputView; // @synthesize moneyInputView=_moneyInputView;
@property(retain, nonatomic) WBPayTextRollView *textRollView; // @synthesize textRollView=_textRollView;
@property(retain, nonatomic) WBPayWithdrawModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)inputView:(id)arg1 textDidChanged:(id)arg2;
- (void)showFailPageWithMessage:(id)arg1;
- (void)showSuccessPageWithDataDictionary:(id)arg1;
- (void)withdrawMoneyWithAlipayToken:(id)arg1;
- (void)verifyUserInfoWithDictionary:(id)arg1;
- (void)setCanWithdrawInfoTextWithIsOverMoney:(_Bool)arg1;
- (void)withdrawMoney:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)withdrawAllMoney;
- (void)setContentWithResultDictionary:(id)arg1;
- (void)leftNavigationAction;
- (void)getUserBaseInfo;
- (void)viewDidLoad;
- (id)logPageString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

