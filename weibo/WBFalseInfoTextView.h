//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBAsyncDrawingView.h"

@protocol WBFalseInfoTextViewDelegate, WBStatusProtocol;

@interface WBFalseInfoTextView : WBAsyncDrawingView
{
    id <WBStatusProtocol> _status;
    id <WBFalseInfoTextViewDelegate> _delegate;
}

+ (double)viewHeightOfStatus:(id)arg1 withContentWidth:(unsigned long long)arg2;
@property(nonatomic) __weak id <WBFalseInfoTextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <WBStatusProtocol> status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 asynchronously:(_Bool)arg3 userInfo:(id)arg4;
- (void)dealloc;

@end

