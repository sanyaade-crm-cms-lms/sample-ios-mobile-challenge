//
//  RetailBankingRewardsCatalog+Local.h
//  AnyPresence SDK
//

/*!
 @header RetailBankingRewardsCatalog+Local
 @abstract Local category for RetailBankingRewardsCatalog class
 */

#import "RetailBankingRewardsCatalog.h"

/*!
 @category RetailBankingRewardsCatalog (Local)
 @abstract Adds local query capabilities to RetailBankingRewardsCatalog.
 @discussion Serves as a strongly-typed wrapper around @link //apple_ref/occ/cat/APObject(Local) @/link methods.
 */ 
@interface RetailBankingRewardsCatalog (Local)

/*!
 @method allLocalWithOffset:limit:
 @abstract Fetches objects matching query scope "all" from local cache, with pagination.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @result Array of objects.
 */
+ (NSArray *)allLocalWithOffset:(NSUInteger)offset limit:(NSUInteger)limit;

/*!
 @method exactMatchLocalWithParams:offset:limit:
 @abstract Fetches objects matching query scope "exact_match" from local cache, with pagination.
 @param params Scope parameter - params.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @result Array of objects.
 */
+ (NSArray *)exactMatchLocalWithParams:(NSDictionary *)params offset:(NSUInteger)offset limit:(NSUInteger)limit;

/*!
 @method rewardsCatalogLocalWithItemCategory:offset:limit:
 @abstract Fetches objects matching query scope "rewards_catalog" from local cache, with pagination.
 @param itemCategory Scope parameter - itemCategory.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @result Array of objects.
 */
+ (NSArray *)rewardsCatalogLocalWithItemCategory:(NSString *)itemCategory offset:(NSUInteger)offset limit:(NSUInteger)limit;

@end