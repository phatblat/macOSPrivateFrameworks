//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface OCPPackageRelationship : NSObject
{
    NSString *mIdentifier;
    NSString *mType;
    int mTargetMode;
    NSURL *mTargetLocation;
}

- (void).cxx_destruct;
- (id)targetLocation;
- (int)targetMode;
- (id)type;
- (id)identifier;
- (id)initWithXmlElement:(struct _xmlNode *)arg1 baseLocation:(id)arg2;
- (void)readFromElement:(struct _xmlNode *)arg1 baseLocation:(id)arg2;

@end
