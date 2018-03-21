//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQSMItemElementBaseView.h>

@class UIView;

@interface QQSMItemElementItemView : QQSMItemElementBaseView
{
    _Bool _isLastItem;
    _Bool _isFirstItem;
    UIView *_bgView;
}

+ (double)getFitFontSize:(id)arg1 fontSize:(double)arg2 maxWidth:(double)arg3;
+ (void)layoutElementsByLayout21:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (void)layoutElementsByLayout19:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (_Bool)layoutElementsByLayout20:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (void)layoutElementsByLayout18:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (void)layoutElementsByLayout17:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (void)layoutElementsByLayout16:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (_Bool)layoutElementsByLayout15:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (_Bool)layoutElementsByLayout14:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (_Bool)layoutElementsByLayout13:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (void)layoutElementsByLayout12:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (void)layoutElementsByLayout11:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (void)layoutElementsByLayout10:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (void)layoutElementsByLayout9:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (void)layoutElementsByLayout8:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (void)layoutElementsByLayout7:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (void)layoutElementsByLayout6:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (void)layoutElementsByLayout5:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (void)layoutElementsByLayout4:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (void)layoutElementsByLayout22:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (void)layoutElementByLayout23:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (void)layoutElementsByLayout3:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (void)layoutElementsByLayout2:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (void)layoutElementsByLayout1:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (void)setQQSMItemElementTextStyleByAccosttype:(id)arg1 accostType:(int)arg2;
+ (struct CGSize)layoutElements:(id)arg1 withMaxSize:(struct CGSize)arg2;
@property(nonatomic) _Bool isFirstItem; // @synthesize isFirstItem=_isFirstItem;
@property(nonatomic) _Bool isLastItem; // @synthesize isLastItem=_isLastItem;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)prepareForReuse;
- (void)setPaddingTop:(int)arg1 left:(int)arg2 bottom:(int)arg3 right:(int)arg4;
- (_Bool)shouldHandleTouch:(struct CGPoint)arg1;
- (void)buildBackgroundView:(id)arg1;
- (void)setQQSMItemElementBase:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
