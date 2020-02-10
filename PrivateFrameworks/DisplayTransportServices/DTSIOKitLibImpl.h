//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DTSIOKitLib.h"

@class NSString;

@interface DTSIOKitLibImpl : NSObject <DTSIOKitLib>
{
}

- (id)PMAssertionWithType:(struct __CFString *)arg1 level:(unsigned int)arg2 name:(struct __CFString *)arg3 error:(int *)arg4;
- (id)serviceForPort:(unsigned int)arg1 matchingDictionary:(id)arg2;
- (id)matchingDictionaryForRegistryEntryID:(unsigned long long)arg1;
- (id)matchingDictionaryForClass:(const char *)arg1;
- (id)makeServiceForService:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
