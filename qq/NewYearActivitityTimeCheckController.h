//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSTimer, UIDatePicker, UILabel;

@interface NewYearActivitityTimeCheckController : UIViewController
{
    UIDatePicker *_datePicker;
    unsigned long long _selectedTime;
    UILabel *_curActivityLab;
    NSArray *_sortTaskArr;
    UILabel *_curTimeLabel;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UILabel *curTimeLabel; // @synthesize curTimeLabel=_curTimeLabel;
@property(retain, nonatomic) NSArray *sortTaskArr; // @synthesize sortTaskArr=_sortTaskArr;
@property(retain, nonatomic) UILabel *curActivityLab; // @synthesize curActivityLab=_curActivityLab;
@property(nonatomic) unsigned long long selectedTime; // @synthesize selectedTime=_selectedTime;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (void).cxx_destruct;
- (void)setting;
- (void)clear;
- (void)timeSelect;
- (void)updateCurTime;
- (void)stopTimer;
- (void)startTimer;
- (void)updateViewContent:(double)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
