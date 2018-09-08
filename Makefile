.PHONY: clean All

All:
	@echo "----------Building project:[ UVa-12577-Hajj-e-Akbar - Debug ]----------"
	@cd "UVa-12577-Hajj-e-Akbar" && "$(MAKE)" -f  "UVa-12577-Hajj-e-Akbar.mk"
clean:
	@echo "----------Cleaning project:[ UVa-12577-Hajj-e-Akbar - Debug ]----------"
	@cd "UVa-12577-Hajj-e-Akbar" && "$(MAKE)" -f  "UVa-12577-Hajj-e-Akbar.mk" clean
