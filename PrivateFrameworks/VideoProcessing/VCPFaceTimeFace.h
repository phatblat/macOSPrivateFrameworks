//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VNFaceprint;

@interface VCPFaceTimeFace : NSObject
{
    VNFaceprint *_faceprint;
}

+ (id)face;
+ (id)faceFromManagedObject:(id)arg1;
@property(retain, nonatomic) VNFaceprint *faceprint; // @synthesize faceprint=_faceprint;
- (void).cxx_destruct;
- (id)description;
- (id)managedObjectForContext:(id)arg1;

@end

