//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSDictionary;

@interface CRKIdentityServiceFetchCourseIdentifiersTaskResultObject : CATTaskResultObject
{
    NSDictionary *_classroomCourseIDsByASMCourseIDs;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *classroomCourseIDsByASMCourseIDs; // @synthesize classroomCourseIDsByASMCourseIDs=_classroomCourseIDsByASMCourseIDs;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

