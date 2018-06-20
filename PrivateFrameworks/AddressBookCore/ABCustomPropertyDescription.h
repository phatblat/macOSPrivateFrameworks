//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectID, NSString;

@interface ABCustomPropertyDescription : NSObject
{
    NSManagedObjectID *_objectID;
    NSString *_propertyName;
    NSString *_recordType;
    long long _valueType;
}

+ (id)descriptionOfValueType:(long long)arg1;
@property(readonly) long long valueType; // @synthesize valueType=_valueType;
@property(readonly, copy) NSString *recordType; // @synthesize recordType=_recordType;
@property(readonly, copy) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property(readonly, copy) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
- (id)description;
- (void)dealloc;
- (id)initWithObjectID:(id)arg1 propertyName:(id)arg2 recordType:(id)arg3 valueType:(long long)arg4;

@end
