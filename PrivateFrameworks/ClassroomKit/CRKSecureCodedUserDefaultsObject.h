//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ClassroomKit/CRKUserDefaultsObject.h>

@class NSSet;

@interface CRKSecureCodedUserDefaultsObject : CRKUserDefaultsObject
{
    NSSet *_classes;
}

@property(readonly, copy, nonatomic) NSSet *classes; // @synthesize classes=_classes;
- (void).cxx_destruct;
- (void)setValue:(id)arg1;
- (id)value;
- (BOOL)setValue:(id)arg1 error:(id *)arg2;
- (id)valueWithError:(id *)arg1;
- (id)initWithDefaults:(id)arg1 key:(id)arg2 classes:(id)arg3;
- (id)initWithKey:(id)arg1 classes:(id)arg2;
- (id)initWithDefaults:(id)arg1 key:(id)arg2;

@end
