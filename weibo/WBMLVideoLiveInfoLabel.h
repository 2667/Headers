//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, NSString, UILabel;

@interface WBMLVideoLiveInfoLabel : UIView
{
    _Bool _coinHidden;
    _Bool _newType;
    NSString *_viewerQuantity;
    NSString *_coinQuantity;
    UILabel *_viewerQuantityLabel;
    UILabel *_viewerDescLabel;
    UILabel *_coinQuantityLabel;
    UILabel *_coinDescLabel;
    CALayer *_leftShadowLayer;
    CALayer *_rightShadowLayer;
    UIView *_lineView;
}

+ (id)quantityStringWithQuantityString:(id)arg1 color:(id)arg2;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) CALayer *rightShadowLayer; // @synthesize rightShadowLayer=_rightShadowLayer;
@property(retain, nonatomic) CALayer *leftShadowLayer; // @synthesize leftShadowLayer=_leftShadowLayer;
@property(retain, nonatomic) UILabel *coinDescLabel; // @synthesize coinDescLabel=_coinDescLabel;
@property(retain, nonatomic) UILabel *coinQuantityLabel; // @synthesize coinQuantityLabel=_coinQuantityLabel;
@property(retain, nonatomic) UILabel *viewerDescLabel; // @synthesize viewerDescLabel=_viewerDescLabel;
@property(retain, nonatomic) UILabel *viewerQuantityLabel; // @synthesize viewerQuantityLabel=_viewerQuantityLabel;
@property(nonatomic) _Bool newType; // @synthesize newType=_newType;
@property(nonatomic) _Bool coinHidden; // @synthesize coinHidden=_coinHidden;
@property(copy, nonatomic) NSString *coinQuantity; // @synthesize coinQuantity=_coinQuantity;
@property(copy, nonatomic) NSString *viewerQuantity; // @synthesize viewerQuantity=_viewerQuantity;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

