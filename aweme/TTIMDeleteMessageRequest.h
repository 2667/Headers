//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTRequestMessage.h"

@class TTIMDeleteMessageIDL;

@interface TTIMDeleteMessageRequest : TTRequestMessage
{
    TTIMDeleteMessageIDL *_deleteMessageIDL;
}

@property(retain, nonatomic) TTIMDeleteMessageIDL *deleteMessageIDL; // @synthesize deleteMessageIDL=_deleteMessageIDL;
- (void).cxx_destruct;
- (id)encodeToHttpParams;
- (id)encode;
- (void)setDeleteMessageInfo:(id)arg1;
- (id)init;

@end
