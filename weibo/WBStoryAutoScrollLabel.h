//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class CADisplayLink, CAGradientLayer, NSMutableArray, NSString, UIColor, UIFont;

@interface WBStoryAutoScrollLabel : UIScrollView <UIScrollViewDelegate>
{
    struct {
        unsigned int isScrolling:1;
    } _flags;
    UIFont *_font;
    NSString *_text;
    UIColor *_textColor;
    double _textPadding;
    NSMutableArray *_nameLabels;
    CAGradientLayer *_maskLayer;
    CADisplayLink *_displayLink;
}

@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) NSMutableArray *nameLabels; // @synthesize nameLabels=_nameLabels;
@property(nonatomic) double textPadding; // @synthesize textPadding=_textPadding;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)displayLinkTrigger:(id)arg1;
- (void)destroy;
- (void)stopScroll;
- (void)startScroll;
- (void)updateLabels;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

