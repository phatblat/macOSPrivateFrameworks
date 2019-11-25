//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMIdentity, NSNumber;

@interface EDAMSharedNote : FATObject
{
    NSNumber *_sharerUserID;
    EDAMIdentity *_recipientIdentity;
    NSNumber *_privilege;
    NSNumber *_serviceCreated;
    NSNumber *_serviceUpdated;
    NSNumber *_serviceAssigned;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *serviceAssigned; // @synthesize serviceAssigned=_serviceAssigned;
@property(retain, nonatomic) NSNumber *serviceUpdated; // @synthesize serviceUpdated=_serviceUpdated;
@property(retain, nonatomic) NSNumber *serviceCreated; // @synthesize serviceCreated=_serviceCreated;
@property(retain, nonatomic) NSNumber *privilege; // @synthesize privilege=_privilege;
@property(retain, nonatomic) EDAMIdentity *recipientIdentity; // @synthesize recipientIdentity=_recipientIdentity;
@property(retain, nonatomic) NSNumber *sharerUserID; // @synthesize sharerUserID=_sharerUserID;
- (void).cxx_destruct;

@end

