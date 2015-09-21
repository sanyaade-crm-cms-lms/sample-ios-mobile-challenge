//
//  RetailBankingLocation+Local.h
//  AnyPresence SDK
//

/*!
 @header RetailBankingLocation+Local
 @abstract Local category for RetailBankingLocation class
 */

#import "RetailBankingLocation.h"

/*!
 @category RetailBankingLocation (Local)
 @abstract Adds local query capabilities to RetailBankingLocation.
 @discussion Serves as a strongly-typed wrapper around @link //apple_ref/occ/cat/APObject(Local) @/link methods.
 */ 
@interface RetailBankingLocation (Local)

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
 @method locationsLocalWithLatitude:longitude:radius:radiusUom:locationType:address:city:state:postalCode:offset:limit:
 @abstract Fetches objects matching query scope "locations" from local cache, with pagination.
 @param latitude Scope parameter - latitude.
 @param longitude Scope parameter - longitude.
 @param radius Scope parameter - radius.
 @param radiusUom Scope parameter - radiusUom.
 @param locationType Scope parameter - locationType.
 @param address Scope parameter - address.
 @param city Scope parameter - city.
 @param state Scope parameter - state.
 @param postalCode Scope parameter - postalCode.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @result Array of objects.
 */
+ (NSArray *)locationsLocalWithLatitude:(NSString *)latitude longitude:(NSString *)longitude radius:(NSString *)radius radiusUom:(NSString *)radiusUom locationType:(NSString *)locationType address:(NSString *)address city:(NSString *)city state:(NSString *)state postalCode:(NSString *)postalCode offset:(NSUInteger)offset limit:(NSUInteger)limit;

@end