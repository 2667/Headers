//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCChatBubble.h"

#import "MCChatBubbleBackgroundViewDelegate-Protocol.h"

@class MCChatBubbleBackgroundView, NSString, UIImage, UIImageView, UILabel, UIView;

@interface MCChatBaseCardBubble : MCChatBubble <MCChatBubbleBackgroundViewDelegate>
{
    double _maskMaxAlpha;
    double _maxInnerTitleHeigh;
    NSString *_defaultTextFontColorHex;
    _Bool _isSend;
    UIImage *_defaultInnerBubbleBackgroundReceiveImage;
    UIImage *_defaultInnerBubbleBackgroundSendImage;
    UIImage *_defaultCardBackgroundImage;
    UIImage *_defaultCardBigIconImage;
    UIImage *_defaultTypeIconImage;
    NSString *_textFontColorHex;
    NSString *_defaultFromIconText;
    UILabel *_titleLab;
    UIImageView *_cardBackgroundView;
    UIImageView *_cardBigIconImageView;
    UIImageView *_typeIconImageView;
    UIView *_cornBackgroundView;
    UILabel *_subLab;
    UILabel *_typeLab;
    MCChatBubbleBackgroundView *_innerBubbleImageView;
    UIView *_maskView;
}

+ (struct CGSize)bubbleSizeForCellObject:(id)arg1 withContainer:(struct CGSize)arg2;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) MCChatBubbleBackgroundView *innerBubbleImageView; // @synthesize innerBubbleImageView=_innerBubbleImageView;
@property(retain, nonatomic) UILabel *typeLab; // @synthesize typeLab=_typeLab;
@property(retain, nonatomic) UILabel *subLab; // @synthesize subLab=_subLab;
@property(retain, nonatomic) UIView *cornBackgroundView; // @synthesize cornBackgroundView=_cornBackgroundView;
@property(retain, nonatomic) UIImageView *typeIconImageView; // @synthesize typeIconImageView=_typeIconImageView;
@property(retain, nonatomic) UIImageView *cardBigIconImageView; // @synthesize cardBigIconImageView=_cardBigIconImageView;
@property(retain, nonatomic) UIImageView *cardBackgroundView; // @synthesize cardBackgroundView=_cardBackgroundView;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) NSString *defaultFromIconText; // @synthesize defaultFromIconText=_defaultFromIconText;
@property(retain, nonatomic) NSString *textFontColorHex; // @synthesize textFontColorHex=_textFontColorHex;
@property(retain, nonatomic) UIImage *defaultTypeIconImage; // @synthesize defaultTypeIconImage=_defaultTypeIconImage;
@property(retain, nonatomic) UIImage *defaultCardBigIconImage; // @synthesize defaultCardBigIconImage=_defaultCardBigIconImage;
@property(retain, nonatomic) UIImage *defaultCardBackgroundImage; // @synthesize defaultCardBackgroundImage=_defaultCardBackgroundImage;
@property(retain, nonatomic) UIImage *defaultInnerBubbleBackgroundSendImage; // @synthesize defaultInnerBubbleBackgroundSendImage=_defaultInnerBubbleBackgroundSendImage;
@property(retain, nonatomic) UIImage *defaultInnerBubbleBackgroundReceiveImage; // @synthesize defaultInnerBubbleBackgroundReceiveImage=_defaultInnerBubbleBackgroundReceiveImage;
- (void).cxx_destruct;
- (void)chatBubbleBackgroundViewLongPress:(id)arg1;
- (void)chatBubbleBackgroundViewTapped:(id)arg1;
- (void)updateBubbleWithCellObject:(id)arg1 bubbleHandler:(id)arg2 atIndexPath:(id)arg3;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)createLab:(id)arg1 font:(double)arg2;
- (void)initSubview;
- (id)initWithBubbleStyle:(long long)arg1 subStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

