//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PMLTrainingStore;

@interface PMLPreinstalledPlansManager : NSObject
{
    PMLTrainingStore *_store;
    NSString *_plansDirectory;
}

+ (id)preinstalledPlansDirectory;
- (void).cxx_destruct;
- (void)runWhileDoneForTesting;
- (id)preinstalledPlanByFilename:(id)arg1;
- (void)enumeratePreinstalledPlansWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)availableSessionsWithDescriptor:(id)arg1 satisfyRequirements:(id)arg2;
- (BOOL)hasAlreadyRunPlan:(struct NSString *)arg1;
- (void)runWhile:(CDUnknownBlockType)arg1;
- (id)initWithStore:(id)arg1;
- (id)initWithStore:(id)arg1 plansDirectory:(id)arg2;
- (id)init;

@end

