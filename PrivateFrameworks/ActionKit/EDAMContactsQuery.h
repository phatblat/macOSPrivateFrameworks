//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMContactsQuery : FATObject
{
    NSNumber *_maxEntries;
    NSString *_prefix;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(retain, nonatomic) NSNumber *maxEntries; // @synthesize maxEntries=_maxEntries;
- (void).cxx_destruct;

@end

