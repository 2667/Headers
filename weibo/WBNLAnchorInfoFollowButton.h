//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLGradientControl.h"

@class UIImageView, UILabel;

@interface WBNLAnchorInfoFollowButton : WBNLGradientControl
{
    UIImageView *_addImageView;
    UILabel *_followLabel;
}

@property(retain, nonatomic) UILabel *followLabel; // @synthesize followLabel=_followLabel;
@property(retain, nonatomic) UIImageView *addImageView; // @synthesize addImageView=_addImageView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

