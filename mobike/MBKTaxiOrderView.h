//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MBKAdditionalSelectLineView, MBKCarHailingOrder, MBKDriverLineView, MBKEndTripStatusLineView, MBKInputTaximeterHeaderView, MBKPayListLineView, MBKServicesLineView, MBKTaxiHailingViewModel, RACCommand, RACSignal, UIButton;

@interface MBKTaxiOrderView : UIView
{
    MBKCarHailingOrder *_order;
    RACSignal *_cancelOrderSignal;
    RACSignal *_payOrderSignal;
    RACSignal *_payCashierSignal;
    MBKAdditionalSelectLineView *_additionalSelectView;
    MBKDriverLineView *_driverView;
    MBKEndTripStatusLineView *_endTripView;
    MBKInputTaximeterHeaderView *_inputView;
    MBKPayListLineView *_payListView;
    MBKServicesLineView *_servicesView;
    UIView *_payButtonView;
    UIButton *_payButton;
    MBKTaxiHailingViewModel *_viewModel;
    RACCommand *_payOrderCommand;
    RACCommand *_payCashierCommand;
}

@property(retain, nonatomic) RACCommand *payCashierCommand; // @synthesize payCashierCommand=_payCashierCommand;
@property(retain, nonatomic) RACCommand *payOrderCommand; // @synthesize payOrderCommand=_payOrderCommand;
@property(retain, nonatomic) MBKTaxiHailingViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIButton *payButton; // @synthesize payButton=_payButton;
@property(retain, nonatomic) UIView *payButtonView; // @synthesize payButtonView=_payButtonView;
@property(retain, nonatomic) MBKServicesLineView *servicesView; // @synthesize servicesView=_servicesView;
@property(retain, nonatomic) MBKPayListLineView *payListView; // @synthesize payListView=_payListView;
@property(retain, nonatomic) MBKInputTaximeterHeaderView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) MBKEndTripStatusLineView *endTripView; // @synthesize endTripView=_endTripView;
@property(retain, nonatomic) MBKDriverLineView *driverView; // @synthesize driverView=_driverView;
@property(retain, nonatomic) MBKAdditionalSelectLineView *additionalSelectView; // @synthesize additionalSelectView=_additionalSelectView;
@property(retain, nonatomic) RACSignal *payCashierSignal; // @synthesize payCashierSignal=_payCashierSignal;
@property(retain, nonatomic) RACSignal *payOrderSignal; // @synthesize payOrderSignal=_payOrderSignal;
@property(retain, nonatomic) RACSignal *cancelOrderSignal; // @synthesize cancelOrderSignal=_cancelOrderSignal;
@property(retain, nonatomic) MBKCarHailingOrder *order; // @synthesize order=_order;
- (void).cxx_destruct;
- (void)configSubviewsWithOrder:(id)arg1;
- (void)setBinder;
- (id)init;

@end

