//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface PLFileSystemPersistenceAttributes : NSObject
{
    NSDictionary *_attributes;
    NSDictionary *_unknownAttributes;
}

- (void).cxx_destruct;
- (id)description;
- (id)stringForKey:(id)arg1;
- (BOOL)getUInt64:(unsigned long long *)arg1 forKey:(id)arg2;
- (BOOL)getInt32:(int *)arg1 forKey:(id)arg2;
- (BOOL)getUInt16:(unsigned short *)arg1 forKey:(id)arg2;
- (id)UUIDStringForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)initWithAttributes:(id)arg1 unknownAttributes:(id)arg2;

@end

