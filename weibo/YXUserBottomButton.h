//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UILabel;

@interface YXUserBottomButton : UIButton
{
    UILabel *_numLabel;
    UILabel *_textLabel;
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
- (void).cxx_destruct;
- (void)topAndBottomView;
- (void)setSelected:(_Bool)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

