//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ReadInjoyAsynImageView, UILabel;

@interface ReadInJoySeparateTopicView : UIView
{
    UILabel *_title;
    UILabel *_subTitle;
    ReadInjoyAsynImageView *_backImage;
}

@property(retain, nonatomic) ReadInjoyAsynImageView *backImage; // @synthesize backImage=_backImage;
@property(retain, nonatomic) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setDataWithTitle:(id)arg1 subTitle:(id)arg2 imgUrl:(id)arg3;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

