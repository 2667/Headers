//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KSExtensionButton, KSMediaEditActivityArrowView;

@interface _KSMediaEditActivityTopBar : UIView
{
    KSExtensionButton *_cancelButton;
    KSExtensionButton *_finishButton;
    KSMediaEditActivityArrowView *_arrowView;
}

+ (id)imageWithTitle:(id)arg1 textColor:(id)arg2;
@property(retain, nonatomic) KSMediaEditActivityArrowView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) KSExtensionButton *finishButton; // @synthesize finishButton=_finishButton;
@property(retain, nonatomic) KSExtensionButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

