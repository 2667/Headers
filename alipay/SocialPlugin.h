//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SocialPlugin : NSObject
{
    NSMutableArray *_pluginStore;
}

@property(retain, nonatomic) NSMutableArray *pluginStore; // @synthesize pluginStore=_pluginStore;
- (void).cxx_destruct;
- (void)findPlugin:(id)arg1 param:(id)arg2 enumerate:(CDUnknownBlockType)arg3;
- (id)findPlugin:(id)arg1 param:(id)arg2;
- (_Bool)removePlugin:(id)arg1;
- (_Bool)addPlugin:(id)arg1;
- (id)init;

@end
