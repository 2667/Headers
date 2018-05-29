//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIColor, UIFont;

@interface TTFScrollNumberLabel : UIView
{
    _Bool _scrollDiabled;
    NSString *_currentText;
    NSString *_targetText;
    UIFont *_font;
    UIColor *_textColor;
    NSMutableArray *_container;
    long long _maxRow;
}

@property(nonatomic) long long maxRow; // @synthesize maxRow=_maxRow;
@property(retain, nonatomic) NSMutableArray *container; // @synthesize container=_container;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSString *targetText; // @synthesize targetText=_targetText;
@property(nonatomic) _Bool scrollDiabled; // @synthesize scrollDiabled=_scrollDiabled;
@property(copy, nonatomic) NSString *currentText; // @synthesize currentText=_currentText;
- (void).cxx_destruct;
- (void)p_updateComponentsFrameForTopItemLabel:(id)arg1 bottomItemLabel:(id)arg2;
- (void)p_reviseCurrentFrame;
- (id)p_substringForText:(id)arg1 atIndex:(long long)arg2;
- (id)p_generateLabelItemByPlant;
- (void)p_componentsInit;
- (void)changeToText:(id)arg1 interval:(double)arg2 animated:(_Bool)arg3;
- (id)initWithMaxRow:(unsigned long long)arg1 text:(id)arg2 font:(id)arg3 textColor:(id)arg4;

@end

