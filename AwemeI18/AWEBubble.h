//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEBubbleAnchor-Protocol.h"

@class NSString, UILabel;
@protocol AWEBubbleAnchor;

@interface AWEBubble : UIView <AWEBubbleAnchor>
{
    _Bool _attributedBubble;
    UIView *_anchorView;
    UILabel *_textLabel;
    UIView<AWEBubbleAnchor> *_bubbleView;
    unsigned long long _direction;
    struct CGPoint _anchorPoint;
    struct CGSize _fixedSize;
    struct CGPoint _contentOffset;
    struct UIEdgeInsets _edgeInsets;
}

+ (id)bubbleWithAttributedContent:(id)arg1 direction:(unsigned long long)arg2 anchorAdjustment:(struct CGPoint)arg3 bubbleImageName:(id)arg4 image9ScaleInsets:(struct UIEdgeInsets)arg5 edgeInsets:(struct UIEdgeInsets)arg6 fixedSize:(struct CGSize)arg7;
+ (id)bubbleWithContent:(id)arg1 direction:(unsigned long long)arg2 anchorAdjustment:(struct CGPoint)arg3 bubbleImageName:(id)arg4 image9ScaleInsets:(struct UIEdgeInsets)arg5 edgeInsets:(struct UIEdgeInsets)arg6 font:(id)arg7 color:(id)arg8 fixedSize:(struct CGSize)arg9;
+ (id)bubbleWithContent:(id)arg1 direction:(unsigned long long)arg2 anchorAdjustment:(struct CGPoint)arg3;
+ (id)bubbleWithContent:(id)arg1 direction:(unsigned long long)arg2;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) struct CGSize fixedSize; // @synthesize fixedSize=_fixedSize;
@property(nonatomic) _Bool attributedBubble; // @synthesize attributedBubble=_attributedBubble;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) UIView<AWEBubbleAnchor> *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(retain, nonatomic) UIView *anchorView; // @synthesize anchorView=_anchorView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)syncStatusWithAnchor;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)adjustBodyFrame;
- (void)redoLayout;
- (struct CGPoint)anchorPositionRelatedToLeftTop;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)currentTextSize;
- (void)layoutSubviews;
- (void)initWithLabel:(id)arg1 direction:(unsigned long long)arg2 bubbleView:(id)arg3 edgeInsets:(struct UIEdgeInsets)arg4 fixedSize:(struct CGSize)arg5;
- (void)initWithContent:(id)arg1 direction:(unsigned long long)arg2 bubbleView:(id)arg3 edgeInsets:(struct UIEdgeInsets)arg4 font:(id)arg5 color:(id)arg6 fixedSize:(struct CGSize)arg7;
- (void)initWithContent:(id)arg1 direction:(unsigned long long)arg2 anchorAdjustment:(struct CGPoint)arg3 bubbleImageName:(id)arg4 image9ScaleInsets:(struct UIEdgeInsets)arg5 edgeInsets:(struct UIEdgeInsets)arg6 font:(id)arg7 color:(id)arg8 fixedSize:(struct CGSize)arg9;
- (void)initWithAttributedContent:(id)arg1 direction:(unsigned long long)arg2 anchorAdjustment:(struct CGPoint)arg3 bubbleImageName:(id)arg4 image9ScaleInsets:(struct UIEdgeInsets)arg5 edgeInsets:(struct UIEdgeInsets)arg6 fixedSize:(struct CGSize)arg7;
- (void)initWithContent:(id)arg1 direction:(unsigned long long)arg2 anchorAdjustment:(struct CGPoint)arg3;
- (void)initWithContent:(id)arg1 direction:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

