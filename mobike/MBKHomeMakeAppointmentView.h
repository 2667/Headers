//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MBKAddressPickerView, MBKHomeMakeAppointmentViewModel, MBKTimeSelectLineView;

@interface MBKHomeMakeAppointmentView : UIView
{
    MBKHomeMakeAppointmentViewModel *_viewModel;
    MBKTimeSelectLineView *_timeSelectView;
    MBKAddressPickerView *_addressPickerView;
}

@property(retain, nonatomic) MBKAddressPickerView *addressPickerView; // @synthesize addressPickerView=_addressPickerView;
@property(retain, nonatomic) MBKTimeSelectLineView *timeSelectView; // @synthesize timeSelectView=_timeSelectView;
@property(retain, nonatomic) MBKHomeMakeAppointmentViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)configWithType:(long long)arg1;
- (void)setBinder;
- (void)addConstraints;
- (void)setupViews;
- (id)init;

@end

