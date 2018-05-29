//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WB360PhoneIndicatorView : UIView
{
    _Bool _animating;
    UIImageView *_phoneImageView;
    UILabel *_textLabel;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *phoneImageView; // @synthesize phoneImageView=_phoneImageView;
@property(readonly, nonatomic) _Bool animating; // @synthesize animating=_animating;
- (void).cxx_destruct;
- (void)_resetAnimation;
- (void)_addMovementAnimationToLayer:(id)arg1 offset:(double)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)stopAnimation;
- (void)startAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithImage:(id)arg1;

@end

