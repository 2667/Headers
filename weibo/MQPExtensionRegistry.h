//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface MQPExtensionRegistry : NSObject
{
    NSDictionary *classMap;
}

+ (id)emptyRegistry;
+ (void)initialize;
@property(retain) NSDictionary *classMap; // @synthesize classMap;
- (void).cxx_destruct;
- (id)getExtension:(Class)arg1 fieldNumber:(int)arg2;
- (id)keyForClass:(Class)arg1;
- (id)initWithClassMap:(id)arg1;

@end

