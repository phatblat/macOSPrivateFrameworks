//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VKCustomFeatureAnnotation.h"

@class NSString, VKCustomFeature;

__attribute__((visibility("hidden")))
@interface VKClusterFeatureAnnotation : NSObject <VKCustomFeatureAnnotation>
{
    CDStruct_2c43369c _coordinate;
    VKCustomFeature *_customFeature;
}

@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
- (id)feature;
- (void)dealloc;
- (id)initWithClusterNode:(struct ClusterTreeClusterNode *)arg1 clusterTree:(const shared_ptr_e2fd4869 *)arg2 baseStyle:(id)arg3 imageText:(id)arg4 annotationText:(id)arg5 annotationLocale:(id)arg6;

// Remaining properties
@property(nonatomic) double course;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

