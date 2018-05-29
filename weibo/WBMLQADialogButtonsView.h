//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableString, NSString, WBMLQADialogButton;

@interface WBMLQADialogButtonsView : UIView
{
    _Bool _userSelected;
    WBMLQADialogButton *_buttonA;
    WBMLQADialogButton *_buttonB;
    WBMLQADialogButton *_buttonC;
    NSMutableString *_questionID;
    NSString *_questionNumber;
}

@property(copy, nonatomic) NSString *questionNumber; // @synthesize questionNumber=_questionNumber;
@property(copy, nonatomic) NSMutableString *questionID; // @synthesize questionID=_questionID;
@property(retain, nonatomic) WBMLQADialogButton *buttonC; // @synthesize buttonC=_buttonC;
@property(retain, nonatomic) WBMLQADialogButton *buttonB; // @synthesize buttonB=_buttonB;
@property(retain, nonatomic) WBMLQADialogButton *buttonA; // @synthesize buttonA=_buttonA;
@property(nonatomic) _Bool userSelected; // @synthesize userSelected=_userSelected;
- (void).cxx_destruct;
- (void)buttonAction:(id)arg1;
- (void)forbidAnswer;
- (void)setButtonsView;
- (void)addSubViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

