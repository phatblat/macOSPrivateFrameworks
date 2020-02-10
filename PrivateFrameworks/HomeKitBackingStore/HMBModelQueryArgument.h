//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSString;

@interface HMBModelQueryArgument : HMFObject
{
    NSString *_propertyName;
    id <HMBQueryableModelFieldCoder> _defaultValue;
}

+ (id)argumentWithPropertyName:(id)arg1 defaultValue:(id)arg2;
+ (id)argumentWithPropertyName:(id)arg1;
@property(readonly, nonatomic) id <HMBQueryableModelFieldCoder> defaultValue; // @synthesize defaultValue=_defaultValue;
@property(readonly, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
- (void).cxx_destruct;
- (id)initWithPropertyName:(id)arg1 defaultValue:(id)arg2;

@end
