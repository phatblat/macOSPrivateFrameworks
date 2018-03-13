//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Spotlight/SPDefaults.h>

@interface SPAppDefaults : SPDefaults
{
    BOOL _darkMode;
}

+ (id)localizedGroupName:(id)arg1;
+ (id)localizedGroupNameDictionary;
+ (id)defaultGroupNumberSort;
+ (id)topHitGroupPreferences;
+ (id)enabledGroupQueryString:(id)arg1;
+ (id)enabledGroupQueryFragment;
+ (id)enabledGroupIndexSet;
+ (id)groupIdFromName:(id)arg1;
+ (id)nameFromGroupId:(unsigned long long)arg1;
+ (id)allGroupIndexSet;
+ (id)groupNameToGroupNumberDictionary;
+ (id)groupIdToNameDictionary;
+ (id)disabledGroups;
+ (id)defaultGroupSort;
+ (void)initialize;
+ (id)checkList;
@property BOOL darkMode; // @synthesize darkMode=_darkMode;
- (id)loadCategoryOrder:(id)arg1;
- (void)reloadPrefs;
- (id)init;
- (void)appearanceChanged:(id)arg1;

@end

