//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseViewController.h"

@class MBKAbroadPaymentAddCreditCellModel, MBKAbroadPaymentAddCreditCellView, NSString, UIButton, UILabel;

@interface MBKAddCreditCardViewController : MBKBaseViewController
{
    NSString *cardNo;
    NSString *expDate;
    NSString *cvvCode;
    _Bool _isAddAndPay;
    long long _creditCardPlatformType;
    unsigned long long _paytype;
    long long _amount;
    long long _pricingstrategy;
    double _utcTimestamp;
    UILabel *_headerLabel;
    UIButton *_saveButton;
    MBKAbroadPaymentAddCreditCellView *_cardNoFieldCell;
    MBKAbroadPaymentAddCreditCellView *_expDateFieldCell;
    MBKAbroadPaymentAddCreditCellView *_cvvCodeFieldCell;
    MBKAbroadPaymentAddCreditCellModel *_cardNoFieldModel;
    MBKAbroadPaymentAddCreditCellModel *_expDateFieldModel;
    MBKAbroadPaymentAddCreditCellModel *_cvvCodeFieldModel;
}

@property(retain, nonatomic) MBKAbroadPaymentAddCreditCellModel *cvvCodeFieldModel; // @synthesize cvvCodeFieldModel=_cvvCodeFieldModel;
@property(retain, nonatomic) MBKAbroadPaymentAddCreditCellModel *expDateFieldModel; // @synthesize expDateFieldModel=_expDateFieldModel;
@property(retain, nonatomic) MBKAbroadPaymentAddCreditCellModel *cardNoFieldModel; // @synthesize cardNoFieldModel=_cardNoFieldModel;
@property(retain, nonatomic) MBKAbroadPaymentAddCreditCellView *cvvCodeFieldCell; // @synthesize cvvCodeFieldCell=_cvvCodeFieldCell;
@property(retain, nonatomic) MBKAbroadPaymentAddCreditCellView *expDateFieldCell; // @synthesize expDateFieldCell=_expDateFieldCell;
@property(retain, nonatomic) MBKAbroadPaymentAddCreditCellView *cardNoFieldCell; // @synthesize cardNoFieldCell=_cardNoFieldCell;
@property(retain, nonatomic) UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(nonatomic) double utcTimestamp; // @synthesize utcTimestamp=_utcTimestamp;
@property(nonatomic) long long pricingstrategy; // @synthesize pricingstrategy=_pricingstrategy;
@property(nonatomic) long long amount; // @synthesize amount=_amount;
@property(nonatomic) unsigned long long paytype; // @synthesize paytype=_paytype;
@property(nonatomic) _Bool isAddAndPay; // @synthesize isAddAndPay=_isAddAndPay;
@property(nonatomic) long long creditCardPlatformType; // @synthesize creditCardPlatformType=_creditCardPlatformType;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)refreshButtonState;
- (void)saveButtonTapped:(id)arg1;
- (void)addTextFields;
- (void)viewDidLoad;
- (_Bool)shouldHideNavigationBarShadow;

@end

