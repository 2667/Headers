//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWELiveBarrageModel, UILabel;

@interface AWELiveBarrageView : UIView
{
    UILabel *_contentLabel;
    AWELiveBarrageModel *_model;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) AWELiveBarrageModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (void)handleTapGes:(id)arg1;
- (void)_completeAnimation;
- (void)stopAnimation;
- (void)startAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)configWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
