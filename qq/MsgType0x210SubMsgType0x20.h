//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MsgType0x210SubMsgType0x20 : NSObject
{
    unsigned int _dwOpType;
    unsigned int _dwType;
    long long _dwUin;
    NSString *_strRemaek;
    int _xo;
}

+ (void)parseMsgType0x210SubMsgType0x20:(struct MsgType0x210SubMsgType0x20 *)arg1;
- (void)dealloc;

// Remaining properties
@property(nonatomic) unsigned int dwOpType; // @dynamic dwOpType;
@property(nonatomic) unsigned int dwType; // @dynamic dwType;
@property(nonatomic) long long dwUin; // @dynamic dwUin;
@property(retain, nonatomic) NSString *strRemaek; // @dynamic strRemaek;

@end

