//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSPredicate, NSString;

@interface PKAddressSearchRequest : NSObject
{
    NSArray *_keysToFetch;
    CDUnknownBlockType _contactFilter;
    NSString *_outputKey;
    long long _type;
    NSString *_fragment;
    NSPredicate *_predicate;
}

@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(copy, nonatomic) NSString *fragment; // @synthesize fragment=_fragment;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *outputKey; // @synthesize outputKey=_outputKey;
@property(copy, nonatomic) CDUnknownBlockType contactFilter; // @synthesize contactFilter=_contactFilter;
@property(retain, nonatomic) NSArray *keysToFetch; // @synthesize keysToFetch=_keysToFetch;
- (void).cxx_destruct;
- (CDUnknownBlockType)_contactPropertyFilterForKey:(id)arg1 propertyName:(id)arg2;
- (id)contactKeys;
- (id)postalAddressKeys;
- (id)allKeys;
- (id)initWithPhoneNumber:(id)arg1;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithPostalAddress:(id)arg1;
- (id)initWithNameComponents:(id)arg1;

@end

