//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLURLRequest.h"

@class NSString;

@interface WBNLGiftListURLRequest : WBNLURLRequest
{
    NSString *_open_id;
    NSString *_room_id;
}

@property(copy, nonatomic) NSString *room_id; // @synthesize room_id=_room_id;
@property(copy, nonatomic) NSString *open_id; // @synthesize open_id=_open_id;
- (void).cxx_destruct;
- (id)path;
- (id)parseResponseData:(id)arg1;

@end

