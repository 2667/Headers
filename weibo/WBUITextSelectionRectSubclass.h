//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextSelectionRect.h>

#import "WBTextSelectionRect-Protocol.h"

@class NSString;

@interface WBUITextSelectionRectSubclass : UITextSelectionRect <WBTextSelectionRect>
{
    _Bool _containsStart;
    _Bool _containsEnd;
    _Bool _isVertical;
    long long _writingDirection;
    struct CGRect _rect;
}

@property(nonatomic) _Bool isVertical; // @synthesize isVertical=_isVertical;
@property(nonatomic) _Bool containsEnd; // @synthesize containsEnd=_containsEnd;
@property(nonatomic) _Bool containsStart; // @synthesize containsStart=_containsStart;
@property(nonatomic) long long writingDirection; // @synthesize writingDirection=_writingDirection;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (struct CGRect)CGRectValue;
- (id)initWithRect:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

