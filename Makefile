.PHONY: clean All

All:
	@echo "----------Building project:[ UVa-12289-One-Two-Three - Debug ]----------"
	@cd "UVa-12289-One-Two-Three" && "$(MAKE)" -f  "UVa-12289-One-Two-Three.mk"
clean:
	@echo "----------Cleaning project:[ UVa-12289-One-Two-Three - Debug ]----------"
	@cd "UVa-12289-One-Two-Three" && "$(MAKE)" -f  "UVa-12289-One-Two-Three.mk" clean
