//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface WBSportWeeklyCheckInView : UIView
{
    UILabel *_titleLabel;
    UIImageView *_checkMarkView;
    _Bool _isCircle;
    _Bool _hasChecked;
    NSString *_title;
}

@property(nonatomic) _Bool hasChecked; // @synthesize hasChecked=_hasChecked;
@property(nonatomic) _Bool isCircle; // @synthesize isCircle=_isCircle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *checkMarkView; // @synthesize checkMarkView=_checkMarkView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

