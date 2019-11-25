//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor, NSDictionary, NSImage, NSString;

__attribute__((visibility("hidden")))
@interface FI_TNodeViewSettings : NSObject
{
    double _iconViewIconSize;
    double _iconViewGridSpacing;
    struct CGPoint _iconViewGridOffset;
    double _iconViewTextSize;
    _Bool _iconViewLabelOnBottom;
    _Bool _iconViewShowItemInfo;
    _Bool _iconViewShowIconPreview;
    int _iconViewArrangeBy;
    int _iconViewBackgroundType;
    _Bool _iconViewHideColorWell;
    _Bool _iconViewHideImageWell;
    struct TNSRef<NSColor, void> _iconViewBackgroundColor;
    struct TNSRef<NSImage, void> _iconViewBackgroundImage;
    struct TFENode _iconViewBackgroundImageNode;
    struct CGPoint _iconViewScrollPosition;
    double _listViewIconSize;
    double _listViewTextSize;
    _Bool _listViewShowDateModified;
    _Bool _listViewShowDateCreated;
    _Bool _listViewShowDateAdded;
    _Bool _listViewShowDateLastOpened;
    _Bool _listViewShowSize;
    _Bool _listViewShowKind;
    _Bool _listViewShowVersion;
    _Bool _listViewShowComments;
    _Bool _listViewShowLabel;
    _Bool _listViewShowICloudStatus;
    _Bool _listViewUseRelativeDates;
    _Bool _listViewCalculateAllSizes;
    _Bool _listViewShowIconPreview;
    int _listViewSortColumn;
    _Bool _listViewSortOrderAscending;
    struct TNSRef<NSMutableDictionary, void> _listViewColumnSettings;
    struct CGPoint _listViewScrollPosition;
    _Bool _userHasChangedListViewSort;
    struct TFENode _node;
    _Bool _browseWithCustomViewStyle;
    int _customViewStyle;
    int _viewStyle;
    _Bool _isLinen;
    _Bool _isAppCentric;
    struct TString _arrangeBy;
    int _sortBy;
    int _groupBy;
    struct unique_ptr<Browser::TIconBrowserSettings, std::__1::default_delete<Browser::TIconBrowserSettings>> _iconBrowserSettings;
    struct unique_ptr<Browser::TListBrowserSettings, std::__1::default_delete<Browser::TListBrowserSettings>> _listBrowserSettings;
    _Bool _refreshing;
    _Bool _settingsChanged;
    struct TNSRef<FI_TListViewSettings, void> _listViewSettings;
    struct TNSRef<FI_TIconViewSettings, void> _iconViewSettings;
}

+ (int)sortByForColumnViewArrangeBy:(int)arg1;
+ (int)columnViewArrangeByForSortBy:(int)arg1;
+ (id)listViewColumnIdentifierForProperty:(unsigned int)arg1;
+ (int)sortByForIconViewArrangeBy:(int)arg1;
+ (int)iconViewArrangeByForSortBy:(int)arg1;
+ (int)columnViewArrangeByForNode:(const struct TFENode *)arg1;
+ (id)keyPathsForValuesAffectingCanBeByICloudStatus;
+ (id)keyPathsForValuesAffectingCanBeSortedByLabel;
+ (id)keyPathsForValuesAffectingCanBeSortedByKind;
+ (id)keyPathsForValuesAffectingCanBeSortedBySize;
+ (id)keyPathsForValuesAffectingCanBeSortedByDate;
+ (id)keyPathsForValuesAffectingCanBeSortedBySnapToGrid;
+ (id)keyPathsForValuesAffectingCanBeSortedByNone;
+ (id)keyPathsForValuesAffectingCanBeSortedByName;
+ (id)keyPathsForValuesAffectingIsDesktop;
+ (id)keyPathsForValuesAffectingIsAirDrop;
+ (id)keyPathsForValuesAffectingIsSearch;
+ (id)keyPathsForValuesAffectingGroupBy;
+ (void)setViewStyleInPrefs:(int)arg1 forName:(struct TString)arg2;
+ (int)viewStyleFromPrefsForName:(struct TString)arg1;
+ (void)setSettingsDictionaryInPrefs:(id)arg1 forName:(struct TString)arg2;
+ (id)settingsDictionaryFromPrefsForName:(struct TString)arg1;
+ (void)deleteTagViewSettings:(struct TString)arg1;
+ (void)renameTagViewSettings:(struct TString)arg1 to:(struct TString)arg2;
+ (void)setNodeHasCustomViewStyle:(const struct TFENode *)arg1;
+ (id)settingsForNode:(const struct TFENode *)arg1;
+ (id)keyPathsForValuesAffectingBrowseWithCustomViewStyle;
+ (id)keyPathsForValuesAffectingNodeHasCustomViewStyle;
+ (id)keyPathsForValuesAffectingNodeCustomViewStyleIndex;
+ (id)keyPathsForValuesAffectingShowDefaultsButton;
@property(nonatomic) _Bool userHasChangedListViewSort; // @synthesize userHasChangedListViewSort=_userHasChangedListViewSort;
@property(nonatomic) struct CGPoint listViewScrollPosition; // @synthesize listViewScrollPosition=_listViewScrollPosition;
@property(nonatomic) _Bool listViewSortOrderAscending; // @synthesize listViewSortOrderAscending=_listViewSortOrderAscending;
@property(nonatomic) _Bool listViewShowIconPreview; // @synthesize listViewShowIconPreview=_listViewShowIconPreview;
@property(nonatomic) _Bool listViewUseRelativeDates; // @synthesize listViewUseRelativeDates=_listViewUseRelativeDates;
@property(nonatomic) _Bool listViewShowICloudStatus; // @synthesize listViewShowICloudStatus=_listViewShowICloudStatus;
@property(nonatomic) _Bool listViewShowLabel; // @synthesize listViewShowLabel=_listViewShowLabel;
@property(nonatomic) _Bool listViewShowComments; // @synthesize listViewShowComments=_listViewShowComments;
@property(nonatomic) _Bool listViewShowVersion; // @synthesize listViewShowVersion=_listViewShowVersion;
@property(nonatomic) _Bool listViewShowKind; // @synthesize listViewShowKind=_listViewShowKind;
@property(nonatomic) _Bool listViewShowSize; // @synthesize listViewShowSize=_listViewShowSize;
@property(nonatomic) _Bool listViewShowDateAdded; // @synthesize listViewShowDateAdded=_listViewShowDateAdded;
@property(nonatomic) _Bool listViewShowDateLastOpened; // @synthesize listViewShowDateLastOpened=_listViewShowDateLastOpened;
@property(nonatomic) _Bool listViewShowDateCreated; // @synthesize listViewShowDateCreated=_listViewShowDateCreated;
@property(nonatomic) _Bool listViewShowDateModified; // @synthesize listViewShowDateModified=_listViewShowDateModified;
@property(nonatomic) double listViewTextSize; // @synthesize listViewTextSize=_listViewTextSize;
@property(nonatomic) double listViewIconSize; // @synthesize listViewIconSize=_listViewIconSize;
@property(nonatomic) struct CGPoint iconViewScrollPosition; // @synthesize iconViewScrollPosition=_iconViewScrollPosition;
@property(nonatomic) _Bool iconViewHideImageWell; // @synthesize iconViewHideImageWell=_iconViewHideImageWell;
@property(nonatomic) _Bool iconViewHideColorWell; // @synthesize iconViewHideColorWell=_iconViewHideColorWell;
@property(nonatomic) _Bool iconViewShowIconPreview; // @synthesize iconViewShowIconPreview=_iconViewShowIconPreview;
@property(nonatomic) _Bool iconViewShowItemInfo; // @synthesize iconViewShowItemInfo=_iconViewShowItemInfo;
@property(nonatomic) _Bool iconViewLabelOnBottom; // @synthesize iconViewLabelOnBottom=_iconViewLabelOnBottom;
@property(nonatomic) double iconViewTextSize; // @synthesize iconViewTextSize=_iconViewTextSize;
@property(nonatomic) struct CGPoint iconViewGridOffset; // @synthesize iconViewGridOffset=_iconViewGridOffset;
@property(nonatomic) double iconViewGridSpacing; // @synthesize iconViewGridSpacing=_iconViewGridSpacing;
@property(nonatomic) double iconViewIconSize; // @synthesize iconViewIconSize=_iconViewIconSize;
@property(nonatomic) _Bool settingsChanged; // @synthesize settingsChanged=_settingsChanged;
@property(nonatomic) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(nonatomic) _Bool isAppCentric; // @synthesize isAppCentric=_isAppCentric;
@property(nonatomic) _Bool isLinen; // @synthesize isLinen=_isLinen;
@property(readonly, nonatomic) struct TFENode node; // @synthesize node=_node;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) int columnViewArrangeBy; // @dynamic columnViewArrangeBy;
@property(nonatomic) _Bool columnViewShowPreviewColumn; // @dynamic columnViewShowPreviewColumn;
@property(nonatomic) _Bool columnViewShowIconPreview; // @dynamic columnViewShowIconPreview;
@property(nonatomic) _Bool columnViewShowIcons; // @dynamic columnViewShowIcons;
@property(nonatomic) double columnViewPreferredColumnWidth; // @dynamic columnViewPreferredColumnWidth;
@property(nonatomic) double columnViewTextSize; // @dynamic columnViewTextSize;
- (void)saveColumnViewSettings;
@property(readonly, nonatomic) _Bool canBeSortedByICloudStatus; // @dynamic canBeSortedByICloudStatus;
@property(readonly, nonatomic) _Bool canBeSortedByLabel; // @dynamic canBeSortedByLabel;
@property(readonly, nonatomic) _Bool canBeSortedByKind; // @dynamic canBeSortedByKind;
@property(readonly, nonatomic) _Bool canBeSortedBySize; // @dynamic canBeSortedBySize;
@property(readonly, nonatomic) _Bool canBeSortedByDateAdded; // @dynamic canBeSortedByDateAdded;
@property(readonly, nonatomic) _Bool canBeSortedByDate; // @dynamic canBeSortedByDate;
@property(readonly, nonatomic) _Bool canBeSortedBySnapToGrid; // @dynamic canBeSortedBySnapToGrid;
@property(readonly, nonatomic) _Bool canBeSortedByNone; // @dynamic canBeSortedByNone;
@property(readonly, nonatomic) _Bool canBeSortedByName; // @dynamic canBeSortedByName;
- (void)setBackgroundType;
- (int)backgroundType;
@property(copy, nonatomic) NSDictionary *listViewColumnSettings; // @dynamic listViewColumnSettings;
@property(nonatomic) int listViewSortColumn; // @dynamic listViewSortColumn;
- (void)setColumnSortOrderAscending:(int)arg1 ascending:(_Bool)arg2;
- (_Bool)columnSortOrderAscending:(int)arg1;
- (unsigned long long)columnCount;
- (int)columnPropertyAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexForColumnByProperty:(int)arg1;
- (unsigned long long)indexForColumn:(id)arg1;
- (vector_528602f5)columnPropertiesInOrder;
- (void)setColumnsOrder:(const vector_528602f5 *)arg1;
- (double)widthForColumnByProperty:(int)arg1;
- (void)addSpotlightListViewColumn:(int)arg1;
- (_Bool)columnVisibility:(int)arg1;
- (void)setColumnVisibility:(int)arg1 visible:(_Bool)arg2;
- (double)widthForColumn:(id)arg1;
- (void)setColumnWidth:(double)arg1 forColumnByProp:(int)arg2;
- (void)setColumnWidth:(double)arg1 forColumn:(id)arg2;
@property(nonatomic) _Bool listViewCalculateAllSizes;
- (void)setIconViewBackgroundImageNode:(const struct TFENode *)arg1;
- (const struct TFENode *)iconViewBackgroundImageNode;
@property(retain, nonatomic) NSImage *iconViewBackgroundImage; // @dynamic iconViewBackgroundImage;
@property(retain, nonatomic) NSColor *iconViewBackgroundColor; // @dynamic iconViewBackgroundColor;
@property(nonatomic) int iconViewBackgroundType; // @synthesize iconViewBackgroundType=_iconViewBackgroundType;
@property(nonatomic) int iconViewArrangeBy; // @synthesize iconViewArrangeBy=_iconViewArrangeBy;
@property(readonly, nonatomic) double iconViewMinIconSize;
@property(readonly, nonatomic) double iconViewMaxIconSize;
- (void)useAsDefaults;
- (void)restoreToDefaults;
@property(readonly, nonatomic) _Bool showDefaultsButton;
@property(readonly, nonatomic) _Bool isDesktop; // @dynamic isDesktop;
@property(readonly, nonatomic) _Bool disabledViewOptionsForTarget; // @dynamic disabledViewOptionsForTarget;
@property(readonly, nonatomic) _Bool isSearch; // @dynamic isSearch;
@property(nonatomic) NSString *windowName;
@property(nonatomic) int viewStyleForViewOptions;
- (int)viewStyleForOptionsPane:(int)arg1;
@property(nonatomic) int viewStyle; // @dynamic viewStyle;
- (void)checkIfUsingDefaultSettings;
- (void)saveListViewSettings;
- (void)saveIconViewSettings;
- (_Bool)isAllMyFilesTarget;
@property(readonly, nonatomic) _Bool nodeCanSort;
@property(readonly, nonatomic) _Bool nodeCanArrange;
@property(readonly, nonatomic) _Bool sortByNoneSupported;
@property(readonly, nonatomic) _Bool nodeCanArrangeByVolume;
@property(readonly, nonatomic) _Bool nodeCanArrangeByLabel;
@property(readonly, nonatomic) _Bool nodeCanArrangeBySize;
@property(readonly, nonatomic) _Bool nodeCanArrangeByDateCreated;
@property(readonly, nonatomic) _Bool nodeCanArrangeByDateModified;
@property(readonly, nonatomic) _Bool nodeCanArrangeByDateAdded;
@property(readonly, nonatomic) _Bool nodeCanArrangeByDateLastOpened;
@property(readonly, nonatomic) _Bool nodeCanArrangeByAppCategory;
@property(readonly, nonatomic) _Bool nodeCanArrangeByApplication;
@property(readonly, nonatomic) _Bool nodeCanArrangeByTags;
@property(readonly, nonatomic) _Bool nodeCanArrangeByKind;
@property(readonly, nonatomic) _Bool nodeCanArrangeByName;
@property(retain, nonatomic) NSString *arrangeBy; // @dynamic arrangeBy;
@property(nonatomic) int sortBy; // @dynamic sortBy;
- (_Bool)isValidSortBy:(int)arg1;
- (void)updateIconViewArrangeByAfterGroupByChange;
@property(nonatomic) int groupBy;
@property(readonly, nonatomic) _Bool isGrouping;
@property(readonly, nonatomic) _Bool showGroupByPopup;
@property(nonatomic) int nodeCustomViewStyleIndex;
@property(nonatomic) _Bool nodeCanHaveCustomViewStyle;
@property(nonatomic) _Bool nodeHasCustomViewStyle;
@property(nonatomic) int customViewStyle; // @synthesize customViewStyle=_customViewStyle;
@property(nonatomic) _Bool browseWithCustomViewStyle; // @synthesize browseWithCustomViewStyle=_browseWithCustomViewStyle;
- (id)init;
- (id)initWithNode:(const struct TFENode *)arg1;
- (void)refreshSettings:(_Bool)arg1;
- (void)refreshColumnViewSettings;
- (void)refreshListViewSettings;
- (void)refreshIconViewSettings;
- (void)saveBrowseWithCustomViewStyle:(_Bool)arg1;
- (int)loadCustomViewStyle;

@end

