//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class KSLiveMessage, KSOuterStrokeLabel;

@interface KSLiveCommentCell : UITableViewCell
{
    KSLiveMessage *_message;
    KSOuterStrokeLabel *_messageLabel;
    struct CGSize _commentSize;
}

+ (struct CGSize)sizeWithMessage:(id)arg1 fitWidth:(double)arg2 font:(id)arg3;
@property(nonatomic) struct CGSize commentSize; // @synthesize commentSize=_commentSize;
@property(retain, nonatomic) KSOuterStrokeLabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) KSLiveMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)drawWithNode:(id)arg1;
- (_Bool)messageRectContainsPoint:(struct CGPoint)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

